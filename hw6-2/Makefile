a = reply_admin

all: $a.cc
	g++ -o $a $a_main.cc $a.cc

clean:
	rm $a

submit:
	git add .
	git commit -m "hw6-2"
	git push origin master
