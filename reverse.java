import java.io.*;
import java.util.scannar;
class reverse
{
 public static void main(string args[])
 {
   int n,reversee=0,remainder;
   scannar s=new scannar(system.in);
   n=s.nextint();
   while(n!=0)
   {
    remainder=n%10;
    reversee=reversee*10+remainder;
    n/=10;
    }
    system.out.println("the reversed number is:"+reversee);
    }
    }
    
    
