package QuarantineAssignment;

import java.io.File;
import java.nio.file.Files;

public class Directory {
    public static void main(String[] args) {
        File dir=new File("src/QuarantineAssignment");
        printFiles(dir.listFiles(),0);
    }

    private static void printFiles(File[] files,int level) {
        for(File file:files){
            for (int i = 0; i < level; i++)
                System.out.print("\t");

            if(file.isFile())
                System.out.println(file.getName());

            if(file.isDirectory()){
                System.out.println("Directory : "+file.getName());
                printFiles(file.listFiles(),level+1);
            }

        }
    }
}
