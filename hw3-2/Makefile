sg = score_graph
pp = print_point
ad = array_2dim

all: $(sg).o $(pp).o $(ad).o
	g++ -o $(sg) $(sg).o
	g++ -o $(pp) $(pp).o
	g++ -o $(ad) $(ad).o

$(sg).o: $(sg).cc 
	g++ -c -o $(sg).o $(sg).cc

$(pp).o: $(pp).cc
	g++ -c -o $(pp).o $(pp).cc

$(ad).o: $(ad).cc
	g++ -c -o $(ad).o $(ad).cc

clean:
	rm $(sg) $(sg).o $(pp) $(pp).o $(ad) $(ad).o

submit:
	git add .
	git commit -m "hw3-2"
	git push origin master
