package POWER_JAVA;

public class CH43 {
    private String title;
    private String artist;
    private int length; //필드선언하기

///////////////////////////////////////////////////////////////////////////
    public CH43(String artist, String title, int length){ //생성자
        this.artist = artist;
        this.title = title;
        this.length = length;
    }

        public CH43(String artist, String title){ //생성자
        this.artist = artist;
        this.title = title;
        }
        
        public CH43(String title){ //생성자
        this.title = title;
        }

        public CH43(){ //생성자
            this("알수없음");
        }



    



    
    public String toString(){
        return ""+artist+""+title+""+length;
    }


///////////////////////////////////////////////////////////////////////////
    public static void main(String [] args){
        CH43 s1 = new CH43("outward bound","nana",100);
        CH43 s2 = new CH43("outward bound2","nana2");
        CH43 s3 = new CH43("nana3");
        CH43 s4 = new CH43();

        System.out.println(s1);
        System.out.println(s2);
        System.out.println(s3);
        System.out.println(s4);
    }

}