import java.util.Scanner;

public
class Main
{
public
    static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        String s1 = scanner.next();
        String s2 = scanner.next();
        String s3 = scanner.next();

        int n1 = s1.length();
        int n2 = s2.length();
        int n3 = s3.length();

        if (n1 != n2 || n1 != n3 || n2 != n3)
        {
            System.out.println("NO");
            return;
        }

        int[] arr1 = new int[26];
        int[] arr2 = new int[26];
        int[] arr3 = new int[26];

        for (int i = 0; i < n1; i++)
        {
            arr1[s1.charAt(i) - 'a']++;
            arr2[s2.charAt(i) - 'a']++;
            arr3[s3.charAt(i) - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (arr1[i] != arr2[i] || arr2[i] != arr3[i] || arr1[i] != arr3[i])
            {
                System.out.println("NO");
                return;
            }
        }

        System.out.println("YES");
    }
}
