/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculator;

/**
 *
 * @author ugur
 */
public class Calculator {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        Calculator calculator = new Calculator();
        System.out.println(calculator.calculate("1 + 2 * 3 + 4"));

    }

    int calculate(String str) {
        
        // str aralarında bosluk icererek sayi ve islemleri icerir
        // 1 + 2
        // 1
        // 1 + 2 + 3 * 5 gibi
        
        
        // split string i bosluk karakterine gore ayirir
        String[] parts = str.split(" ");
        
        // bos string değeri 0
        if (parts.length == 0) {
            return 0;
        } 
        // sadece sayi gelme durumunda int degeri donulur
        else if (parts.length == 1) {
            return Integer.valueOf(parts[0]);
        }
        // 1 + 2 gibi bir inputta islem onceligi olmadan aradaki isarete gore hesaplariz
        else if (parts.length == 3) {
            if (parts[1].equals("+")) {
                return Integer.valueOf(parts[0]) + Integer.valueOf(parts[2]);
            } 
            else if (parts[1].equals("-")) {
                return Integer.valueOf(parts[0]) - Integer.valueOf(parts[2]);
            } 
            else if (parts[1].equals("*")) {
                return Integer.valueOf(parts[0]) * Integer.valueOf(parts[2]);
            } 
            else if (parts[1].equals("/")) {
                return Integer.valueOf(parts[0]) / Integer.valueOf(parts[2]);
            }
        }
        // 1 + 2 * 3 gibi bir islemde 4 nin onceligi sonra oldugu icin 
        // once sag taraftaki islemi rec ile yapıp ilk sayi ile toplariz
        else if (parts[1].equals("+") || parts[0].equals("-")) {

            String rec = parts[2];
            for (int i = 3; i < parts.length - 1; i++) {
                rec = rec + " " + parts[i];
            }
            rec = rec + " " + parts[parts.length - 1];

            if (parts[1].equals("+")) {
                return Integer.valueOf(parts[0]) + calculate(rec);
            } 
            else if (parts[1].equals("-")) {
                return Integer.valueOf(parts[0]) - calculate(rec);
            }
        } 
        // 1 * 2 + 3 
        // ilk islemimiz * ya da / ise once ilk iki sayiyi carpar kalanını rec e yaptırıp
        // aradaki isarete gore islem yapariz
        else if (parts[1].equals("*")) {
            
            int val = Integer.valueOf(parts[0]) * Integer.valueOf(parts[2]);

            String rec = "";
            
            // 1 * 2 + 3 islemi
            if (parts.length == 5) {

                rec = parts[4];
            } 
            // 1 * 2 + 3 * 5 islemi
            else if (parts.length > 5) {

                rec = parts[4];

                for (int i = 5; i < parts.length - 1; i++) {
                    rec = rec + " " + parts[i];
                }

                rec = rec + " " + parts[parts.length - 1];
            }

            if (parts[3].equals("+")) {
                return val + calculate(rec);
            } 
            else if (parts[3].equals("-")) {
                return val - calculate(rec);
            } 
            else if (parts[3].equals("*")) {
                return val * calculate(rec);
            } 
            else if (parts[3].equals("/")) {
                return val / calculate(rec);
            }
        }
        else if (parts[1].equals("/")) {
            
            int val = Integer.valueOf(parts[0]) / Integer.valueOf(parts[2]);

            String rec = "";

            if (parts.length == 5) {

                rec = parts[4];
            } else if (parts.length > 5) {

                rec = parts[4];

                for (int i = 5; i < parts.length - 1; i++) {
                    rec = rec + " " + parts[i];
                }

                rec = rec + " " + parts[parts.length - 1];
            }

            if (parts[3].equals("+")) {
                return val + calculate(rec);
            }
            else if (parts[3].equals("-")) {
                return val - calculate(rec);
            }
            else if (parts[3].equals("*")) {
                return val * calculate(rec);
            }
            else if (parts[3].equals("/")) {
                return val / calculate(rec);
            }
        }
        
        return 0;
    }

}


