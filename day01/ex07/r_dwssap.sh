#/bin/sh
cat /etc/passwd | awk '{print $1}' | sed 's/\:.*//' | grep _ | rev | sort -r | sed  's/$/\,/' | awk 'NR%2==1' | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]'| tr "\n" " " | sed 's/, $/\./'
