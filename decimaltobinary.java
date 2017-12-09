import java.lang.*;
import java.io.*;
public class decimaltobinary{
   public static void main(string args[])
   {
    bufferedreader bf=new bufferedreader(new inputstreamreader(system.in));
    system.out.println("enter the decimal value:");
    string hex=bf.readline();
    int i=integer.parseInt(hex);
    string by=integer.tobinarystring(i);
    system.out.println("binary:"+by);
    }
    }
