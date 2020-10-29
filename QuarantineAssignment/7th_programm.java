package QuarantineAssignment;

import java.io.File;


public class FileSize {
    public static void main(String[] args) {
        try{
            File file=new File("src/QuarantineAssignment/copy.png");
            System.out.printf("File : %s%n",file.toPath());
            long size=file.length();
            System.out.printf("File size in bytes : %d%n",size);
            System.out.printf("File size in KibiBytes : %.2f%n",size/1024.0);
            System.out.printf("File size in MibiBytes : %.2f%n",size/(1024.0*1024.0));
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
}
