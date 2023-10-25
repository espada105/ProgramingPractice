package POWER_JAVA;

public class CH42 {
    private String name;
    private String mobile;
    private String office;
    private String email;


    public String getname(){
        return name;
    }
    public void setname(String name){
        this.name = name;
    }

        public String getmobile(){
        return mobile;
    }
    public void setmobile(String mobile){
        this.mobile = mobile;
    }

        public String getoffice(){
        return office;
    }
    public void setoffice(String office){
        this.office = office;
    }

        public String emaail(){
        return email;
    }
    public void setemail(String email){
        this.email = email;
    }


        public CH42(String n, String m, String o, String e){
        name = n;
        mobile = m;
        office = o;
        email = e;
    }

    public String toString(){
        return "신상정보는" + name +""+ mobile + "" + office + "" + email + "입니다";
    }

    public static void main(String []args){
        CH42 p = new CH42("이름","010-1234-1234","02-121-121","seongin@naver.com");
        System.out.println(p);
        p.setname("(이름변경)이름1");
        System.out.println(p);
    }
}
