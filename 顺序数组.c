#include <stdio.h>

int main(){
	int arrayLength=3,mult=1,a,i,j,k,m,n,p,q,r,s,c,d;
	int arrayTemplate[3]={3,4,5}; 
	for(a=0;a<arrayLength;a++){
		mult *= arrayTemplate[a];
	}
	int count = mult;
	int arrays[mult][arrayLength];
	int supArrays[arrayLength][mult];
	int supArrays2[arrayLength][mult];
		
	for(i=0;i<arrayLength;i++){
		for(j=0;j<arrayTemplate[i];j++){
			for(k=0;k<mult/arrayTemplate[i];k++){
				supArrays[i][j*mult/arrayTemplate[i]+k] = j;
			}
		}
	}
	
	for(p=0;p<arrayLength;p++){
		count /= arrayTemplate[p];
		for(q=0;q<arrayTemplate[p];q++){
			for(s=0;s<count;s++){
				r=q*count+s;
				while(r<mult){
				supArrays2[p][r] = q;
				r+=count*arrayTemplate[p];
				}
			}	
		}
	}	
	
	for(c=0;c<arrayLength;c++){
		for(d=0;d<mult;d++){
			arrays[d][c] = supArrays2[c][d];
		}
	}
	
	for(m=0;m<mult;m++){
		for(n=0;n<arrayLength;n++){
			printf("%d ",arrays[m][n]);	
		}
		printf("\n");
	}
	
	return 0;
}
