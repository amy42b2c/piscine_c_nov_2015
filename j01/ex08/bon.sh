ldapsearch cn="*bon*" dn 2>/dev/null | grep dn: | wc -l | tr -d ' '
