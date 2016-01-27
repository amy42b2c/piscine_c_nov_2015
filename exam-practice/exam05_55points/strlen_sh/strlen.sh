#trying to get 57 to show up
FT_LINE="Les stagiaires du staff ne sentent pas toujours tres bon.\c"
export FT_LINE
echo $FT_LINE | wc -m | sed 's/ //g'
