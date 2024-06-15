#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void caesar_cipher(char* ,int);
int main()
{
	int shift,n,i;
	char *text;
	printf("Enter the shift: ");
	scanf("%d",&shift);
	printf("Enter n:");
	scanf("%d",&n);
	text = (char*) calloc(n,sizeof(char));
	printf("Enter the text: ");
	for(i=0;i<=n;i++)
	{
		scanf("%c",(text+i));
	}
	
	if(n>=6)
	{
		if(n%2==0)
			n=(sizeof(text));
		else
			n=(sizeof(text))-1;
	}
	else if(n<6)
	{
		if(n%2==0)
			n=(sizeof(text))/2;
		else
			n=((sizeof(text))/2)+1;
	}
	printf("%d\n",n);
    int *ptr;
	ptr = (int*) calloc(n,sizeof(int));
	for(int j=1;j<=n;j++)
	{
		for(i=0;i<n;i++)
		{
		  switch(*(text+j))
		  {
			case 'a': 
			{
				*(ptr+i) = 1+shift;
				break;
		    }
		    case 'b': 
			{
				*(ptr+i) = 2+shift;
				break;
		    }
		    case 'c': 
			{
				*(ptr+i) = 3+shift;
				break;
		    }
		
		    case 'd': 
			{
				*(ptr+i) = 4+shift;
				break;
		    }
		    case 'e': 
			{
				*(ptr+i) = 5+shift;
				break;
		    }
		    case 'f': 
			{
				*(ptr+i) = 6+shift;
				break;
		    }
		    case 'g': 
			{
				*(ptr+i) = 7+shift;
				break;
		    }
		    case 'h': 
			{
				*(ptr+i) = 8+shift;
				break;
		    }
		    case 'i': 
			{
				*(ptr+i) = 9+shift;
				break;
		    }
		    case 'j': 
			{
				*(ptr+i) = 10+shift;
				break;
		    }
		    case 'k': 
			{
				*(ptr+i) = 11+shift;
				break;
		    }
		    case 'l': 
			{
				*(ptr+i) = 12+shift;
				break;
		    }
		    case 'm': 
			{
				*(ptr+i) = 13+shift;
				break;
		    }
		    case 'n': 
			{
				*(ptr+i) = 14+shift;
				break;
		    }
		    case 'o': 
			{
				*(ptr+i) = 15+shift;
				break;
		    }
		    case 'p': 
			{
				*(ptr+i) = 16+shift;
				break;
		    }
		    case 'q': 
			{
				*(ptr+i) = 17+shift;
				break;
		    }
		    case 'r': 
			{
				*(ptr+i) = 18+shift;
				break;
		    }
		    case 's': 
			{
				*(ptr+i) = 19+shift;
				break;
		    }
		    case 't': 
			{
				*(ptr+i) = 20+shift;
				break;
		    }
		    case 'u': 
			{
				*(ptr+i) = 21+shift;
				break;
		    }
		    case 'v': 
			{
				*(ptr+i) = 22+shift;
				break;
		    }
		    case 'w': 
			{
				*(ptr+i) = 23+shift;
				break;
		    }
		    case 'x': 
			{
				*(ptr+i) = 24+shift;
				break;
		    }
		    case 'y': 
			{
				*(ptr+i) = 25+shift;
				break;
		    }
		    case 'z': 
			{
				*(ptr+i) = shift;
				break;
		    }
			
		}
	  
	}
	
  	for(i=0;i<n;i++)
  	{
  		switch(*(ptr+i))
  		{
  		case 1:
  				printf("%c",'a');
  				break;
  			case 2:
  				printf("%c",'b');
  				break;
  			case 3:
  				printf("%c",'c');
  				break;
  			case 4:
  				printf("%c",'d');
  				break;
  			case 5:
  				printf("%c",'e');
  				break;
  			case 6:
  				printf("%c",'f');
  				break;
  			case 7:
  				printf("%c",'g');
  				break;
  			case 8:
  				printf("%c",'h');
  				break;
  			case 9:
  				printf("%c",'i');
  				break;
  			case 10:
  				printf("%c",'j');
  				break;
  			case 11:
  				printf("%c",'k');
  				break;
  			case 12:
  				printf("%c",'l');
  				break;
  			case 13:
  				printf("%c",'m');
  				break;
  			case 14:
  				printf("%c",'n');
  				break;
  			case 15:
  				printf("%c",'o');
  				break;
  			case 16:
  				printf("%c",'p');
  				break;
  			case 17:
  				printf("%c",'q');
  				break;
  			case 18:
  				printf("%c",'r');
  				break;
  			case 19:
  				printf("%c",'s');
  				break;
  			case 20:
  				printf("%c",'t');
  				break;
  			case 21:
  				printf("%c",'u');
  				break;
  			case 22:
  				printf("%c",'v');
  				break;
  			case 23:
  				printf("%c",'w');
  				break;
  			case 24:
  				printf("%c",'x');
  				break;
  			case 25:
  				printf("%c",'y');
  				break;
  			case 26:
  				printf("%c",'z');
  				break;
		  }
		  break;
	  }
	  
   }
  
}