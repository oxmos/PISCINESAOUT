ldapsearch -xLLL "uid=z*" | grep cn: | cut -c4- | sort -r
