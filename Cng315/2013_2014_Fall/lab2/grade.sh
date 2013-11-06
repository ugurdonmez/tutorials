cd ws

for dir in `ls`;
        do
                cd $dir
                rm -rf *txt
                rm -rf *exe
                rm -rf *out
                g++ sorted* -o sorted.out 2>> sorted_error.out
                g++ unsorted* -o unsorted.out 2>> unsorted_error.out
                
                
                cp ../../sorted1/sorted.txt ./
                ./sorted.out 1>> console.txt 2>> console.txt
                mv output.txt sorted1_out.txt
                
                cp ../../sorted2/sorted.txt ./
                ./sorted.out 1>> console.txt 2>> console.txt
                mv output.txt sorted2_out.txt
                
                cp ../../unsorted1/unsorted.txt ./
                ./unsorted.out 1>> console.txt 2>> console.txt
                mv output.txt unsorted1_out.txt
   
                cp ../../unsorted2/unsorted.txt ./
                ./unsorted.out 1>> console.txt 2>> console.txt
                mv output.txt unsorted2_out.txt
               
                rm -rf *.out
                
                cd ..
        done