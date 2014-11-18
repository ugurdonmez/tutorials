cd sub

for dir in `ls`;
	do
		cd $dir
		rm -rf inp*
		rm -rf out*
		rm -rf sol*
		g++ question1* -o question1 
		g++ question2* -o question2
		
		cd ..
	done