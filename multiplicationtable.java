import java.util.scannar;
class multiplicationtable
{
 public static void main(String args[])
 {
  int n,c;
  system.out.println("enter the integer the is print in multiplicationtable);
  scannar in=new scannar(system.in);
  n=in.nextInt();
  system.out.println(("multiplication table of "+n+"is:-);
  for(c=1;c<=10;c++)
  {
   system.out.println(n+"*"+c+"="+(n*c));
   }
   }
 
