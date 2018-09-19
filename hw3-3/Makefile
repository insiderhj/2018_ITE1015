tp = touch_points
cc = cal_complex

all: $(tp).o $(cc).o
	g++ -o $(tp) $(tp).o
	g++ -o $(cc) $(cc).o

$(tp).o: $(tp).cc
	g++ -c -o $(tp).o $(tp).cc

$(cc).o: $(cc).cc
	g++ -c -o $(cc).o $(cc).cc

clean:
	rm $(tp) $(tp).o $(cc) $(cc).o

submit:
	git add .
	git commit -m "hw3-3"
	git push origin master
