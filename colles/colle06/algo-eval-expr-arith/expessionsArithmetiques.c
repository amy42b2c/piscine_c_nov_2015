/*****************************************************************
*
*    Programed By ShNaYkHs
*    shnaykhs@gmail.com
*
* Le programme à été compilé sous Windows avec le compilateur GCC
*                  ( the Gnu C Compiler )
*****************************************************************/


#include <stdio.h>  /* Pour les Entrers/Sorties */
#include <stdlib.h> /* Pour l'Allocation dynamique et autre */
#include <string.h> /* Pour les fonctions de manipulation de chaines */
#include <ctype.h>  /* Pour la fonction isdigit() */
#include <math.h>   /* Pour la fonction pow() */

#define MAX_LEN 20  /* Langeur maximale de l'expression */

/* Definition du type elem pour les elements du vecteur */
typedef struct Elem
{
   float data;
   int flag;  /* 0=>operateur.  1=>operande.  2=>paranthese, 3=>E ou e */
}
elem;

/* Definition du type stack pour la Pile */
typedef struct Stack
{
   elem element;  /* l'element du vecteur */
   struct Stack *prev;
}
stack;


/********************** The Prototyps **********************/
int CorrectExpression (char*);  /* Verifie si l'expression est correcte */
/**==================**/
int IsOperator (elem);  /* Verifie si c'est un operateur */
int IsOperand (elem);  /* Verifie si c'est un operande */
int Priority (elem);  /* retourne la priorité d'un operateur */
elem Operation (float, float, float);  /* calcule une operation simple */
/**==================**/
elem* CharToVector (char*, elem*, int*);  /* chaine => vecteur d'elements */
stack* MakePostfixedForm (elem*, int);  /* La pile de la forme postfixé */
float EvaluatPostfixedExpretion (stack*);  /* Evalué l'expression */
/**==================**/
elem Pop (stack**);  /* Depiler */
void Push (stack**, elem);  /* Empiler */
void InitStack (stack**);  /* Initialiser la pile */
int EmptyStack (stack*);  /* Verifie si la pile est vide ou pas */
elem HeadStack (stack*);  /* retourne l'element de tete de pile */




/******************** The main function ********************/
int main (void)
{
   char expr[MAX_LEN];  /* l'expression sous forme de chaine */
   elem* expr_vect;  /* pour l'expression sous forme d'un vecteur */
   int len_vect;
   stack *P;
   float the_result;

   /* demander la saisi tantque l'expression est incorrecte */
   do
   {
      puts ("Donnez une Expression Arithmetique correcte:");
      gets (expr);
   }
   while( ! CorrectExpression(expr) );

   expr_vect = (elem*) malloc( MAX_LEN * sizeof(elem) );
   expr_vect = CharToVector(expr, expr_vect, &len_vect);

   P = MakePostfixedForm ( expr_vect, len_vect );

   the_result = EvaluatPostfixedExpretion (P);

   printf ("\n\nLe resultat est %f\n", the_result);

   free( expr_vect );
   printf("\nPress any key to exit ...\n");
   getchar();  /* Juste pour metre en pause ... */
   return (0);
}


/********************** The Functions **********************/

/**============= Verifie si un caractére est un operateur ou pas **/
int IsOperator ( elem E )
{
   if( E.flag == 0 )
         return 1;  /* c'est un operateur */

   return 0;  /* ce n'est pas un operateur */
}


/**============= Verifie si un caractére est un operande ou pas **/
int IsOperand ( elem E )
{
   if( E.flag == 1 )
         return 1;  /* c'est un operande */

   return 0;  /* ce n'est pas un operande */
}


/**============= retourne la proprieter d'un operateur **/
int Priority ( elem E )
{
   /* L'element passé à Priority() est un operateur */

   if( E.data=='*' || E.data=='/' || E.data=='%' )
      return 2;

   else if( E.data=='-' || E.data=='+' )
      return 1;

   else
      return -1;  /* erreur ! */
}


/**============= effectue l'operation x op y **/
elem Operation (float x, float y, float op)
{
   elem ret;
   ret.flag = 1;  /* Le resultat de l'operation est un operande */

   switch ((int)op)
   {
      case '+' :  ret.data = x + y;  break;
      case '-' :  ret.data = x - y;  break;
      case '*' :  ret.data = x * y;  break;
      case '/' :  ret.data = x / y;  break;
      case '%' :  ret.data = (int)x % (int)y; break;
   }

   return ret;
}


/**============= retourne la taille du vecteur **/
elem* CharToVector(char* char_exp, elem* vect_exp, int *len_vect)
{
   int i=0, j=0, i_tmp=0, is_unar_minus=0, len = strlen(char_exp);
   int taille_en_plus = 0, taille_en_plus_E = 0; /* les taille à enlever */
   char *tmp; /*Pour contenir le nombre temporerement sous forum d'une chaine*/
   elem* vect;

   while( i < len )
   {
      /* Si c'est ce caractére est un chifre */
      if( isdigit(char_exp[i]) )
      {
         tmp = (char*) malloc(len);

         /* Comstruire le nombre sous forme d'une chaine tmp */
         while( (isdigit(char_exp[i]) || char_exp[i] == '.') && i<len )
         {
            tmp[i_tmp] = char_exp[i];
            i_tmp++;
            taille_en_plus++;  /* ex: le nbr "548" est sur 3 position */
            i++;  /* passé à la case suivante de la chaine */
         }

         /* un nombre sur 3 position dans la chaine va devenir sur 1 seul
            position (dans le vecteur), donc il y a 3-1 = 2 position en plus */
         taille_en_plus--;

         tmp[i_tmp] = '\0';  /* on termine la chaine tmp par '\0' */
         vect_exp[j].flag = 1;  /* c'est un operande */
         if(is_unar_minus)
         {
            vect_exp[j].data = (-1)*atof(tmp);
            is_unar_minus = 0;  /* reinitialisé à FAUX */
         }
         else
            vect_exp[j].data = atof(tmp);
         j++; /* passé à la case suivante du vecteur */

         free(tmp);
         i_tmp = 0;
      }

      /* Si ce n'est pas un chifre, alors: */
      else
      {
         /* Si le caractére - n'est pas précédé par un chifre (le - unaire) */
         if( char_exp[i] == '-'  &&  ! isdigit(char_exp[i-1]) )
         {
            is_unar_minus = 1;  /* VRAI, c'est un - unaire */
            i++;
         }
         else
         {
            vect_exp[j].data = char_exp[i]; /* le code ascii */

            if( char_exp[i] == ')' || char_exp[i] == '(' )
               vect_exp[j].flag = 2;  /* indique que c'est soit ) ou ( */
            else if( char_exp[i] == 'E' || char_exp[i] == 'e' )
               vect_exp[j].flag = 3;  /* indique que c'est un E */
            else
               vect_exp[j].flag = 0;  /* c'est un operateur */

            j++;
            i++;
         }
      }
   }

   /* à la sortie de while, (len-taille_en_plus) == taille actuel de vect_exp */
   /* Maintenant on va s'occuper des caractéres 'E' ou 'e' : */

   vect = (elem*) malloc( (len - taille_en_plus) * sizeof(elem) );

   for( i=0, j=0; i < (len-taille_en_plus); i++ )
   {

      if( vect_exp[i].flag != 3 ) /* si c'est un E ou e */
      {
         vect[j] = vect_exp[i];
         j++;
      }

      else
      {
         /* aEb == a * pow(10, b) */
         vect[j-1].data = vect_exp[i-1].data * pow(10, vect_exp[i+1].data);
         i++;
         taille_en_plus_E = taille_en_plus_E + 2;
      }
   }

   *len_vect = len - taille_en_plus - taille_en_plus_E;

   return vect;  /* le vecteur qu'on cherche */
}




/**============= Les Algos de postfixation et d'evaluation: **/

/* la forme postfixee sera dans la pile P */
stack* MakePostfixedForm( elem* vect, int len_vect )
{
   int i;
   elem E;
   stack *R, *P;
   stack* D;  /* Juste pour tester le Debugage, pour voir la forme postfixé */

   InitStack (&P);
   InitStack (&R);

   for( i=0; i<len_vect; i++ )
   {
      if( IsOperand(vect[i]) )
         Push(&R, vect[i]);

      else if( IsOperator(vect[i]) )
      {
         while( !EmptyStack(P) && IsOperator(HeadStack(P)) &&
                ( Priority(vect[i]) <= Priority(HeadStack(P)) ) )
         {
            E = Pop(&P);
            Push(&R, E);
         }

         Push(&P, vect[i]);
      }

      else if( vect[i].data == '(' )
         Push(&P, vect[i]);

      else
      {
         while( (!EmptyStack(P)) && HeadStack(P).data != '(' )
         {
            E = Pop(&P);
            Push(&R, E);
         }
         E = Pop(&P);
      }
   }

   while( ! EmptyStack (R) )
   {
      E = Pop (&R);
      Push (&P, E);
   }


#if 1 /* Debugage pour voir la forme poste fixée. désactivé avec: #if 0 */
   printf("\nForme postfixee de l'expression:\n");
   D = P;
   for( ; D != NULL; D = D->prev )
   {
      if(D->element.flag == 1)
         printf("%.2f  ", D->element.data);
      else  printf("%c  ", (int)D->element.data);
   }
#endif /* Fin Debugage ... */

   return P;
}


/** Evaluation de l'expression à partire de sa forme postfixée **/
float EvaluatPostfixedExpretion( stack* P )
{
   elem x, y, e;
   stack *R;

   InitStack( &R );

   while( ! EmptyStack(P) )
   {
      e = Pop(&P);

      if( IsOperand(e) )
         Push(&R, e);

      else
      {
         x = Pop (&R);
         y = Pop (&R);
         Push(&P, Operation (y.data, x.data, e.data));
      }
   }

   /* le resultat de l'expression est dans R */
   return R->element.data;
}



/******************************************************************
************* Les fonctions classique sur les Piles : *************
*******************************************************************/


void Push (stack** S, elem E)
{
   stack* tmp = malloc (sizeof (stack));

   tmp->element = E;

   tmp->prev = *S;
   *S = tmp;
}


elem Pop (stack **S)
{
   stack* tmp;
   elem ret;

   if( ! EmptyStack (*S) ) /* si la pile n'est pas vide */
   {
      tmp = *S;
      *S = (*S)->prev;
      ret = tmp->element; /* on va retourner cette element */
      free(tmp);

		return ret;
	}
}


void InitStack( stack **S )
{
   *S = NULL;
}


int EmptyStack (stack *S)
{
   if( S == NULL )
      return 1;  /* Oui pile vide */

   return 0;  /* Pile non vide */
}


elem HeadStack ( stack *S )
{
   return (S->element);
}





/** Verifie si l'expression est correcte ou pas **/
int CorrectExpression( char* expr )
{
   char symbol[21] = "0123456789.eE()*/%+-"; /* il y a 20 symboles autorisés */
   int i, j, trouve = 0, brackets = 0, len = strlen(expr);

   /**========== Verification Lexicale: ==========**/

   for( i=0; i < len; i++ )
   {
      trouve = 0;

      /* Verifier si le expre[i] apartiens à la liste des symboles autorisé */
      for( j=0; j < 20; j++ )
      {
         if( expr[i] == symbol[j] )
         {
            trouve = 1;
            break;
         }
      }

      /* s'il ne se trouve pas dans la liste des symboles autorisé : */
      if( ! trouve )
      {
         printf("Erreur Lexicale: caractere non autoriser.\n");
         return 0;   /* Expression Incorrecte */
      }
   }

   /**========== Verification Syntaxique: ==========**/

   /* Verifier si le nbr de ')' est egale au nbr de '(' */
   for( i=0; i < len; i++ )
   {
      if( expr[i] == '(' )
         brackets++;
      else if( expr[i] == ')' )
         brackets--;
   }

   if( brackets > 0 )
   {
      printf("Il manque %d caractere ')' dans l'expression.\n", brackets);
      return 0;
   }
   else if( brackets < 0 )
   {
      printf("Il manque %d caractere '(' dans l'expression.\n", (-1) * brackets);
      return 0;
   }

   /* Verification de l'ordre des caracteres: */
   for( i=0; i < len; i++ )
   {
      /* pour les caracteres + - * / % */
      if( expr[i] == '+' || expr[i] == '/' || expr[i] == '*' ||
             expr[i] == '%' || expr[i] == '-' )
      {
         /* si l'operateur ce trouve tout en debut ou en fin de l'expression: */
         if( i == len-1 )
         {
            printf("Erreur Syntaxique: presence de caractere(s) mal placer.\n");
            return 0;   /* Expression Incorrecte */
         }
         else if( i == 0 )
         {
            if( expr[i] != '-' )
            {
               printf("Erreur Syntaxique: presence de caractere(s) mal placer.\n");
               return 0;   /* Expression Incorrecte */
            }
            else if( !( isdigit(expr[i+1]) || expr[i+1] == '(' ) )
            {
               printf("Erreur Syntaxique: presence de caractere(s) mal placer.\n");
               return 0;   /* Expression Incorrecte */
            }

         }

         /* Dans le cas d'un operateur differant de '-' :
            il faut que l'operateur soi suivi d'un nombre ou bien d'une '(' ou
            bien un '-'  ,ET, il faut qu'il soi préceder par un nombre
            ou bien par une ')' , Dans le cas contrere, C'est une erreur */
         else if( expr[i] != '-' )
         {
            if( !( (isdigit(expr[i+1]) || expr[i+1] == '(' || expr[i+1] == '-')
                    &&  (isdigit(expr[i-1]) || expr[i-1] == ')') ) )
            {
               printf("Erreur Syntaxique: presence caractere(s) mal placer.\n");
               return 0;   /* Expression Incorrecte */
            }
         }

         /* Si l'operateur est un '-' : */
         else if( !( (isdigit(expr[i+1]) || expr[i+1] == '(' )
             && (isdigit(expr[i-1]) || expr[i-1]==')' || expr[i-1]=='('||
                 expr[i-1] == 'E' || expr[i-1] == 'e' || expr[i-1]=='+'||
                 expr[i-1]=='*' || expr[i-1]=='/'||expr[i-1]=='%') ))
         {
            printf("Erreur Syntaxique: presence caractere(s) mal placer.\n");
            return 0;   /* Expression Incorrecte */
         }

      }

      /* pour le caractere '(' */
      if( expr[i] == '(' )
      {
         /* s'il ce trouve au début de l'expression */
         if( i == 0 )
         {
            /* il faut qu'il soit suivi par soi un nbr soi '(' soi '-'  */
            if( ! (isdigit(expr[i+1]) || expr[i+1]=='(' || expr[i+1]=='-') )
            {
               printf("Erreur Syntaxique: presence caractere(s) mal placer.\n");
               return 0;
            }
         }
         /* s'il ce trouve a la fin de l'expression, alors c'est une erreur */
         else if( i == len-1 )
         {
            printf("Erreur Syntaxique: presence caractere(s) mal placer.\n");
            return 0;
         }
         /* s'il ce trouve quelque part dans l'expression */
         else
         {
            if( ! ( (isdigit(expr[i+1]) || expr[i+1]=='(' || expr[i+1]=='-') &&
                    (expr[i-1]=='*' || expr[i-1]=='-'|| expr[i-1]=='/' ||
                     expr[i-1]=='+' || expr[i-1]=='%'|| expr[i-1]=='(') ) )
            {
              printf("Erreur Syntaxique: presence caractere(s) mal placer.\n");
              return 0;
            }
         }
      }

      /* pour le caractere ')' */
      if( expr[i] == ')' )
      {
         /* s'il ce trouve a la fin de l'expression */
         if( i == len-1 )
         {
            /* il faut qu'il soit preceder par soi un nbr soi ')'  */
            if( ! ( isdigit(expr[i-1]) || expr[i-1]==')' ) )
            {
               printf("Erreur Syntaxique: presence caractere(s) mal placer.\n");
               return 0;
            }
         }
         /* s'il ce trouve au début de l'expression, alors c'est une erreur */
         else if( i == 0 )
         {
            printf("Erreur Syntaxique: presence caractere(s) mal placer.\n");
            return 0;
         }
         /* s'il ce trouve quelque part dans l'expression */
         else
         {
            if( ! ( (isdigit(expr[i-1]) || expr[i-1]==')') &&
                    (expr[i+1]=='*' || expr[i+1]=='-'|| expr[i+1]=='/' ||
                     expr[i+1]=='+' || expr[i+1]=='%'|| expr[i+1]==')') ) )
            {
              printf("Erreur Syntaxique: presence caractere(s) mal placer.\n");
              return 0;
            }
         }
      }

      if(expr[0]=='e' || expr[0]=='E' || expr[len-1]=='e' || expr[len-1]=='E' )
      {
         printf("Erreur Syntaxique: presence caractere(s) mal placer.\n");
         return 0;
      }

      else if( (expr[i] == 'E' || expr[i] == 'e' ) &&
               (expr[i+1]== '*' || expr[i+1]== '/' || expr[i+1]== '+' || expr[i+1]== '%') )
      {
         printf("Erreur Syntaxique:nnn presence caractere(s) mal placer.\n");
         return 0;
      }

   }

   return 1;   /* Expression correcte */
}
















