ldapsearch -x -LLL 'uid=z*' cn | grep 'cn:' | sed -e 's/cn: //' | sort -r -f
