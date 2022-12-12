#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//VariÃ¡veis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//#########################
   	//AREA DE CODIGO DO ALUNO


for(i =0;i<=199;i++){
    x[i]=0;
}

    while(1){
        if(y<0){
            break;
        }
        else{
            w = y/32; 

            x[w] = x[w] | (1<< (y-32*w)); /// armazenando a posiçao em cada vetor W

            printf("digite um valor:");
            scanf("%d", &y);

        }
        
    }

    for(z=0;z<=199;z++){
        for( j=0; j<=31;j++){
            if(1 & (x[z]>> j)){ 
                
                printf("%d\n",(j+(32*z))); // imprimindo a posiçao Z q originalmente era W ,somando com um multiplo de 32,multiplo esse q é o nosso vetor
            }
        }
    }

   	//#########################
   
	return 0;  
}
