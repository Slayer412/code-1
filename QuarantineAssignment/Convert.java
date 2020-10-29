package QuarantineAssignment;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;

public class Convert {
    public static void main(String[] args) {
        try{
            BufferedReader bufferedReader=new BufferedReader(new FileReader("src/QuarantineAssignment/copy.txt"));

            StringBuilder content=new StringBuilder(bufferedReader.readLine());
            String read;
            while((read=bufferedReader.readLine())!=null){
                content.append(read.concat("\n"));
            }
            bufferedReader.close();
            String finalContent=content.toString().toUpperCase();
            BufferedWriter bufferedWriter=new BufferedWriter(new FileWriter("src/QuarantineAssignment/copy.txt"));
            bufferedWriter.write(finalContent);
            bufferedWriter.close();
            System.out.println("Converted to uppercase successfully");
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
}
