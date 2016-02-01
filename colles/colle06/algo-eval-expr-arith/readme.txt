Algorithme pour évaluer les expressions arithmetiques-----------------------------------------------------
Url     : http://codes-sources.commentcamarche.net/source/47952-algorithme-pour-evaluer-les-expressions-arithmetiquesAuteur  : shnaykhsDate    : 03/08/2013
Licence :
=========

Ce document intitulé « Algorithme pour évaluer les expressions arithmetiques » issu de CommentCaMarche
(codes-sources.commentcamarche.net) est mis à disposition sous les termes de
la licence Creative Commons. Vous pouvez copier, modifier des copies de cette
source, dans les conditions fixées par la licence, tant que cette note
apparaît clairement.

Description :
=============

Ce code permet d'&eacute;valuer une expression arithm&eacute;tique donn&eacute;

<br />exemples :
<br />
<br />6*8+7/3
<br />(7+11)*2-5
<br />0+9+6-5*(-4+22
)
<br />etc...
<br />
<br />Le programme d&eacute;tecte aussi les erreurs Syn
taxique ou lexicale pr&eacute;sente dans l'expression saisi.
<br /><a name='sou
rce-exemple'></a><h2> Source / Exemple : </h2>
<br /><pre class='code' data-mo
de='basic'>
/*****************************************************************

*

<ul><li>    Programed By ShNaYkHs
</li><li>    shnaykhs@gmail.com</li></u
l>
*

<ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li
><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li
><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li
><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li
><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li
><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li
><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li>/</li></ul></li></ul></li></ul>
</li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul>
</li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul>
</li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul>
</li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul>
</li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul>
</li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul>
</li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul>
</li></ul></li></ul></li></ul></li></ul></li></ul></li></ul>

#include &lt;std
io.h&gt;  /* Pour les Entrers/Sorties */
#include &lt;stdlib.h&gt; /* Pour l'Al
location dynamique et autre */
#include &lt;string.h&gt; /* Pour les fonctions 
de manipulation de chaines */
#include &lt;ctype.h&gt;  /* Pour la fonction isd
igit() */
#include &lt;math.h&gt;   /* Pour la fonction pow() */

#define MAX
_LEN 20  /* Langeur maximale de l'expression */

/* Definition du type elem po
ur les elements du vecteur */
typedef struct Elem
{
   float data;
   int fl
ag;  /* 0=&gt;operateur.  1=&gt;operande.  2=&gt;paranthese, 3=&gt;E ou e */
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
int CorrectExp
ression (char*);  /* Verifie si l'expression est correcte */
/**===============
===**/
int IsOperator (elem);  /* Verifie si c'est un operateur */
int IsOpera
nd (elem);  /* Verifie si c'est un operande */
int Priority (elem);  /* retourn
e la priorité d'un operateur */
elem Operation (float, float, float);  /* calcu
le une operation simple */
/**==================**/
elem* CharToVector (char*,
 elem*, int*);  /* chaine =&gt; vecteur d'elements */
stack* MakePostfixedForm 
(elem*, int);  /* La pile de la forme postfixé */
float EvaluatPostfixedExpreti
on (stack*);  /* Evalué l'expression */
/**==================**/
elem Pop (sta
ck**);  /* Depiler */
void Push (stack**, elem);  /* Empiler */
void InitStack
 (stack**);  /* Initialiser la pile */
int EmptyStack (stack*);  /* Verifie si 
la pile est vide ou pas */
elem HeadStack (stack*);  /* retourne l'element de t
ete de pile */

/******************** The main function ********************/

int main ()
{
   char expr[MAX_LEN];  /* l'expression sous forme de chaine */

   elem* expr_vect;  /* pour l'expression sous forme d'un vecteur */
   int l
en_vect;
   stack *P;
   float the_result;

   /* demander la saisi tantque 
l'expression est incorrecte */
   do
   {
      puts (&quot;Donnez une Expres
sion Arithmetique correcte:&quot;);
      gets (expr);
   }
   while( ! Corre
ctExpression(expr) );

   expr_vect = (elem*) malloc( MAX_LEN * sizeof(elem) )
;
   expr_vect = CharToVector(expr, expr_vect, &amp;len_vect);

   P = MakePo
stfixedForm ( expr_vect, len_vect );

   the_result = EvaluatPostfixedExpretio
n (P);

   printf (&quot;\n\nLe resultat est %f\n&quot;, the_result);

   fr
ee( expr_vect );
   printf(&quot;\nPress any key to exit ...\n&quot;);
   getc
har();  /* Juste pour metre en pause ... */
   return 0;
}

/***************
******* The Functions **********************/

/**============= Verifie si un 
caractére est un operateur ou pas **/
int IsOperator ( elem E )
{
   if( E.fl
ag == 0 )
         return 1;  /* c'est un operateur */

   return 0;  /* ce n
'est pas un operateur */
}

/**============= Verifie si un caractére est un o
perande ou pas **/
int IsOperand ( elem E )
{
   if( E.flag == 1 )
         
return 1;  /* c'est un operande */

   return 0;  /* ce n'est pas un operande 
*/
}

/**============= retourne la proprieter d'un operateur **/
int Priorit
y ( elem E )
{
   /* L'element passé à Priority() est un operateur */

   if
( E.data=='*' || E.data=='/' || E.data=='%' )
      return 2;

   else if( E.
data=='-' || E.data=='+' )
      return 1;

   else
      return -1;  /* err
eur ! */
}

/**============= effectue l'operation x op y **/
elem Operation 
(float x, float y, float op)
{
   elem ret;
   ret.flag = 1;  /* Le resultat 
de l'operation est un operande */

   switch ((int)op)
   {
      case '+' :
  ret.data = x + y;  break;
      case '-' :  ret.data = x - y;  break;
      
case '*' :  ret.data = x * y;  break;
      case '/' :  ret.data = x / y;  brea
k;
      case '%' :  ret.data = (int)x % (int)y; break;
   }

   return ret;

}

/**============= retourne la taille du vecteur **/
elem* CharToVector(ch
ar* char_exp, elem* vect_exp, int *len_vect)
{
   int i=0, j=0, i_tmp=0, is_un
ar_minus=0, len = strlen(char_exp);
   int taille_en_plus = 0, taille_en_plus_E
 = 0; /* les taille à enlever */
   char *tmp; /*Pour contenir le nombre tempor
erement sous forum d'une chaine*/
   elem* vect;

   while( i &lt; len )
   
{
      /* Si c'est ce caractére est un chifre */
      if( isdigit(char_exp[i
]) )
      {
         tmp = (char*) malloc(len);

         /* Comstruire le 
nombre sous forme d'une chaine tmp */
         while( (isdigit(char_exp[i]) || 
char_exp[i] == '.') &amp;&amp; i&lt;len )
         {
            tmp[i_tmp] = 
char_exp[i];
            i_tmp++;
            taille_en_plus++;  /* ex: le nbr
 &quot;548&quot; est sur 3 position */
            i++;  /* passé à la case sui
vante de la chaine */
         }

         /* un nombre sur 3 position dans l
a chaine va devenir sur 1 seul
            position (dans le vecteur), donc il 
y a 3-1 = 2 position en plus */
         taille_en_plus--;

         tmp[i_tm
p] = '\0';  /* on termine la chaine tmp par '\0' */
         vect_exp[j].flag =
 1;  /* c'est un operande */
         if(is_unar_minus)
         {
          
  vect_exp[j].data = (-1)*atof(tmp);
            is_unar_minus = 0;  /* reiniti
alisé à FAUX */
         }
         else
            vect_exp[j].data = atof(
tmp);
         j++; /* passé à la case suivante du vecteur */

         free(
tmp);
         i_tmp = 0;
      }

      /* Si ce n'est pas un chifre, alors
: */
      else
      {
         /* Si le caractére - n'est pas précédé par u
n chifre (le - unaire) */
         if( char_exp[i] == '-'  &amp;&amp;  ! isdigi
t(char_exp[i-1]) )
         {
            is_unar_minus = 1;  /* VRAI, c'est u
n - unaire */
            i++;
         }
         else
         {
        
    vect_exp[j].data = char_exp[i]; /* le code ascii */

            if( char_
exp[i] == ')' || char_exp[i] == '(' )
               vect_exp[j].flag = 2;  /* 
indique que c'est soit ) ou ( */
            else if( char_exp[i] == 'E' || cha
r_exp[i] == 'e' )
               vect_exp[j].flag = 3;  /* indique que c'est un
 E */
            else
               vect_exp[j].flag = 0;  /* c'est un opera
teur */

            j++;
            i++;
         }
      }
   }

   /
* à la sortie de while, (len-taille_en_plus) == taille actuel de vect_exp */
  
 /* Maintenant on va s'occuper des caractéres 'E' ou 'e' : */

   vect = (elem
*) malloc( (len - taille_en_plus) * sizeof(elem) );

   for( i=0, j=0; i &lt; 
(len-taille_en_plus); i++ )
   {

      if( vect_exp[i].flag != 3 ) /* si c'e
st un E ou e */
      {
         vect[j] = vect_exp[i];
         j++;
      
}

      else
      {
         /* aEb == a * pow(10, b) */
         vect[j-
1].data = vect_exp[i-1].data * pow(10, vect_exp[i+1].data);
         i++;
    
     taille_en_plus_E = taille_en_plus_E + 2;
      }
   }

<ul>   <li>len_v
ect = len - taille_en_plus - taille_en_plus_E;</li></ul>

   return vect;  /* 
le vecteur qu'on cherche */
}

/**============= Les Algos de postfixation et 
d'evaluation: **/

/* la forme postfixee sera dans la pile P */
stack* MakePo
stfixedForm( elem* vect, int len_vect )
{
   int i;
   elem E;
   stack *R, 
*P;
   stack* D;  /* Juste pour tester le Debugage, pour voir la forme postfixé
 */

   InitStack (&amp;P);
   InitStack (&amp;R);

   for( i=0; i&lt;len_v
ect; i++ )
   {
      if( IsOperand(vect[i]) )
         Push(&amp;R, vect[i])
;

      else if( IsOperator(vect[i]) )
      {
         while( !EmptyStack(
P) &amp;&amp; IsOperator(HeadStack(P)) &amp;&amp;
                ( Priority(ve
ct[i]) &lt;= Priority(HeadStack(P)) ) )
         {
            E = Pop(&amp;P)
;
            Push(&amp;R, E);
         }

         Push(&amp;P, vect[i]);

      }

      else if( vect[i].data == '(' )
         Push(&amp;P, vect[i]);


      else
      {
         while( (!EmptyStack(P)) &amp;&amp; HeadStack(P
).data != '(' )
         {
            E = Pop(&amp;P);
            Push(&amp
;R, E);
         }
         E = Pop(&amp;P);
      }
   }

   while( ! Emp
tyStack (R) )
   {
      E = Pop (&amp;R);
      Push (&amp;P, E);
   }

#
if 1 /* Debugage pour voir la forme poste fixée. désactivé avec: #if 0 */
   pr
intf(&quot;\nForme postfixee de l'expression:\n&quot;);
   D = P;
   for( ; D 
!= NULL; D = D-&gt;prev )
   {
      if(D-&gt;element.flag == 1)
         pri
ntf(&quot;%.2f  &quot;, D-&gt;element.data);
      else  printf(&quot;%c  &quot
;, (int)D-&gt;element.data);
   }
#endif /* Fin Debugage ... */

   return P
;
}

/** Evaluation de l'expression à partire de sa forme postfixée **/
floa
t EvaluatPostfixedExpretion( stack* P )
{
   elem x, y, e;
   stack *R;

  
 InitStack( &amp;R );

   while( ! EmptyStack(P) )
   {
      e = Pop(&amp;P
);

      if( IsOperand(e) )
         Push(&amp;R, e);

      else
      {

         x = Pop (&amp;R);
         y = Pop (&amp;R);
         Push(&amp;P, 
Operation (y.data, x.data, e.data));
      }
   }

   /* le resultat de l'ex
pression est dans R */
   return R-&gt;element.data;
}

/*******************
***********************************************

<ul><li><ul><li><ul><li><ul><
li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li> Les 
fonctions classique sur les Piles : *************
<ul><li><ul><li><ul><li><ul><
li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><
li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><
li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><
li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><
li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><li><ul><
li>/</li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li><
/ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li><
/ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li><
/ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li><
/ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li><
/ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li><
/ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li><
/ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li></ul></li><
/ul></li></ul></li></ul></li></ul>

void Push (stack** S, elem E)
{
   stack
* tmp = malloc (sizeof (stack));

   tmp-&gt;element = E;

   tmp-&gt;prev =
 *S;

<ul>   <li>S = tmp;</li></ul>
}

elem Pop (stack **S)
{
   stack* t
mp;
   elem ret;

   if( ! EmptyStack (*S) ) /* si la pile n'est pas vide */

   {
      tmp = *S;

<ul>      <li>S = (*S)-&gt;prev;</li></ul>
      ret 
= tmp-&gt;element; /* on va retourner cette element */
      free(tmp);

    
  return ret;
   }

}

void InitStack( stack **S )
{

<ul>   <li>S = NUL
L;</li></ul>
}

int EmptyStack (stack *S)
{
   if( S == NULL )
      retur
n 1;  /* Oui pile vide */

   return 0;  /* Pile non vide */
}

elem HeadSt
ack ( stack *S )
{
   return (S-&gt;element);
}

/** Verifie si l'expressio
n est correcte ou pas **/
int CorrectExpression( char* expr )
{
   char symbo
l[21] = &quot;0123456789.eE()*/%+-&quot;; /* il y a 20 symboles autorisés */
  
 int i, j, trouve = 0, brackets = 0, len = strlen(expr);

   /**========== Ver
ification Lexicale: ==========**/

   for( i=0; i &lt; len; i++ )
   {
     
 trouve = 0;

      /* Verifier si le expre[i] apartiens à la liste des symbol
es autorisé */
      for( j=0; j &lt; 20; j++ )
      {
         if( expr[i] 
== symbol[j] )
         {
            trouve = 1;
            break;
       
  }
      }

      /* s'il ne se trouve pas dans la liste des symboles autori
sé : */
      if( ! trouve )
      {
         printf(&quot;Erreur Lexicale: c
aractere non autoriser.\n&quot;);
         return 0;   /* Expression Incorrecte
 */
      }
   }

   /**========== Verification Syntaxique: ==========**/


   /* Verifier si le nbr de ')' est egale au nbr de '(' */
   for( i=0; i &lt;
 len; i++ )
   {
      if( expr[i] == '(' )
         brackets++;
      else 
if( expr[i] == ')' )
         brackets--;
   }

   if( brackets &gt; 0 )
  
 {
      printf(&quot;Il manque %d caractere ')' dans l'expression.\n&quot;, br
ackets);
      return 0;
   }
   else if( brackets &lt; 0 )
   {
      prin
tf(&quot;Il manque %d caractere '(' dans l'expression.\n&quot;, (-1) * brackets)
;
      return 0;
   }

   /* Verification de l'ordre des caracteres: */
  
 for( i=0; i &lt; len; i++ )
   {
      /* pour les caracteres + - * / % */
 
     if( expr[i] == '+' || expr[i] == '/' || expr[i] == '*' ||
             exp
r[i] == '%' || expr[i] == '-' )
      {
         /* si l'operateur ce trouve t
out en debut ou en fin de l'expression: */
         if( i == len-1 )
         
{
            printf(&quot;Erreur Syntaxique: presence de caractere(s) mal plac
er.\n&quot;);
            return 0;   /* Expression Incorrecte */
         }

         else if( i == 0 )
         {
            if( expr[i] != '-' )
      
      {
               printf(&quot;Erreur Syntaxique: presence de caractere(s)
 mal placer.\n&quot;);
               return 0;   /* Expression Incorrecte */

            }
            else if( !( isdigit(expr[i+1]) || expr[i+1] == '(' ) 
)
            {
               printf(&quot;Erreur Syntaxique: presence de car
actere(s) mal placer.\n&quot;);
               return 0;   /* Expression Incorr
ecte */
            }

         }

         /* Dans le cas d'un operateur d
ifferant de '-' :
            il faut que l'operateur soi suivi d'un nombre ou 
bien d'une '(' ou
            bien un '-'  ,ET, il faut qu'il soi préceder par 
un nombre
            ou bien par une ')' , Dans le cas contrere, C'est une err
eur */
         else if( expr[i] != '-' )
         {
            if( !( (isdi
git(expr[i+1]) || expr[i+1] == '(' || expr[i+1] == '-')
                    &am
p;&amp;  (isdigit(expr[i-1]) || expr[i-1] == ')') ) )
            {
          
     printf(&quot;Erreur Syntaxique: presence caractere(s) mal placer.\n&quot;);

               return 0;   /* Expression Incorrecte */
            }
       
  }

         /* Si l'operateur est un '-' : */
         else if( !( (isdigit
(expr[i+1]) || expr[i+1] == '(' )
             &amp;&amp; (isdigit(expr[i-1]) |
| expr[i-1]==')' || expr[i-1]=='('||
                 expr[i-1] == 'E' || expr[
i-1] == 'e' || expr[i-1]=='+'||
                 expr[i-1]=='*' || expr[i-1]=='
/'||expr[i-1]=='%') ))
         {
            printf(&quot;Erreur Syntaxique: 
presence caractere(s) mal placer.\n&quot;);
            return 0;   /* Expressi
on Incorrecte */
         }

      }

      /* pour le caractere '(' */
  
    if( expr[i] == '(' )
      {
         /* s'il ce trouve au début de l'expr
ession */
         if( i == 0 )
         {
            /* il faut qu'il soit 
suivi par soi un nbr soi '(' soi '-'  */
            if( ! (isdigit(expr[i+1]) 
|| expr[i+1]=='(' || expr[i+1]=='-') )
            {
               printf(&qu
ot;Erreur Syntaxique: presence caractere(s) mal placer.\n&quot;);
             
  return 0;
            }
         }
         /* s'il ce trouve a la fin de l
'expression, alors c'est une erreur */
         else if( i == len-1 )
        
 {
            printf(&quot;Erreur Syntaxique: presence caractere(s) mal placer
.\n&quot;);
            return 0;
         }
         /* s'il ce trouve quelq
ue part dans l'expression */
         else
         {
            if( ! ( (is
digit(expr[i+1]) || expr[i+1]=='(' || expr[i+1]=='-') &amp;&amp;
              
      (expr[i-1]=='*' || expr[i-1]=='-'|| expr[i-1]=='/' ||
                   
  expr[i-1]=='+' || expr[i-1]=='%'|| expr[i-1]=='(') ) )
            {
       
       printf(&quot;Erreur Syntaxique: presence caractere(s) mal placer.\n&quot;
);
              return 0;
            }
         }
      }

      /* pour
 le caractere ')' */
      if( expr[i] == ')' )
      {
         /* s'il ce t
rouve a la fin de l'expression */
         if( i == len-1 )
         {
      
      /* il faut qu'il soit preceder par soi un nbr soi ')'  */
            if(
 ! ( isdigit(expr[i-1]) || expr[i-1]==')' ) )
            {
               pri
ntf(&quot;Erreur Syntaxique: presence caractere(s) mal placer.\n&quot;);
      
         return 0;
            }
         }
         /* s'il ce trouve au déb
ut de l'expression, alors c'est une erreur */
         else if( i == 0 )
     
    {
            printf(&quot;Erreur Syntaxique: presence caractere(s) mal pla
cer.\n&quot;);
            return 0;
         }
         /* s'il ce trouve qu
elque part dans l'expression */
         else
         {
            if( ! ( 
(isdigit(expr[i-1]) || expr[i-1]==')') &amp;&amp;
                    (expr[i+1
]=='*' || expr[i+1]=='-'|| expr[i+1]=='/' ||
                     expr[i+1]=='+
' || expr[i+1]=='%'|| expr[i+1]==')') ) )
            {
              printf(&
quot;Erreur Syntaxique: presence caractere(s) mal placer.\n&quot;);
           
   return 0;
            }
         }
      }

      if(expr[0]=='e' || exp
r[0]=='E' || expr[len-1]=='e' || expr[len-1]=='E' )
      {
         printf(&q
uot;Erreur Syntaxique: presence caractere(s) mal placer.\n&quot;);
         ret
urn 0;
      }

      else if( (expr[i] == 'E' || expr[i] == 'e' ) &amp;&amp;

               (expr[i+1]== '*' || expr[i+1]== '/' || expr[i+1]== '+' || expr[
i+1]== '%') )
      {
         printf(&quot;Erreur Syntaxique:nnn presence car
actere(s) mal placer.\n&quot;);
         return 0;
      }

   }

   retur
n 1;   /* Expression correcte */
}
</pre>
<br /><a name='conclusion'></a><h2>
 Conclusion : </h2>
<br />Tout ceci permet de ce familiariser avec l'utilisati
on de listes chain&eacute;es (Piles) pour l'&eacute;valuation et la transformati
on en forme postfix&eacute;e.
<br />
<br />P.S. Le programme &agrave; &eacute;
t&eacute; compil&eacute; et test&eacute; sous Windows avec le compilateur GCC (G
nu C Compiler).
