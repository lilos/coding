## how use
```
wget http://www.apuebook.com/src.3e.tar.gz
tar zxvf src.3e.tar.gz
cd apue.3e
make

cc -o myls myls.c -I apue.3e/include/ -L apue.3e/lib/ -lapue
alias ca="cc -I apue.3e/include/ -L apue.3e/lib/ -lapue"
ca ***.c
```
