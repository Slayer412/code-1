package QuarantineAssignment;

import javafx.animation.ScaleTransition;

import java.io.File;
import java.nio.file.Files;
import java.nio.file.attribute.BasicFileAttributes;
import java.nio.file.attribute.FileTime;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.concurrent.TimeUnit;

public class FileInfo {
    public static void main(String[] args) {
        try{
            File file=new File("src/QuarantineAssignment/copy.png");
            System.out.printf("File : %s%n",file.toPath());
            BasicFileAttributes fileAttributes= Files.readAttributes(file.toPath(),BasicFileAttributes.class);
            DateFormat format= new SimpleDateFormat("dd-MM-yyyy hh:mm:ss");
            FileTime creationTime=fileAttributes.creationTime();
            System.out.printf("File creation time : %s%n",format.format(creationTime.toMillis()));
            FileTime lastAccessTime=fileAttributes.lastAccessTime();
            System.out.printf("File creation time : %s%n",format.format(lastAccessTime.toMillis()));
            FileTime lastModifiedTime=fileAttributes.lastModifiedTime();
            System.out.printf("File creation time : %s%n",format.format(lastModifiedTime.toMillis()));
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
}
