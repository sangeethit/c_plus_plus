class Palindrome
{  
 public static void main(String args[])
 {  
  int r,s=0,temp;    
  int n=121;
  temp=n;    
  while(n>0)
  {    
   r=n%10;  
   s=(s*10)+r;    
   n=n/10;    
  }    
  if(temp==s)    
   System.out.println("palindrome number ");    
  else    
   System.out.println("not palindrome");    
 }  
}  
