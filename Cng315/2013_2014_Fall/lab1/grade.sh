cd ws

for dir in `ls`;
	do
		cd $dir
		rm -rf inp*
		rm -rf out*
		rm -rf sol*
		g++ * -o solution
		
		
		cp ../../inp1/input.txt ./
		./solution
		mv output.txt out1.txt
		
		cp ../../inp2/input.txt ./
		./solution
		mv output.txt out2.txt
		
		cp ../../inp3/input.txt ./
		./solution
		mv output.txt out3.txt
		
		cd ..
	done