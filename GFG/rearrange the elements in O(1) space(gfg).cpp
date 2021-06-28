void arrange(long long a[], int n) {
    // Your code here
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]+(a[a[i]]%n)*n;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]/n;
    }
}

/*It took me hours to understand (I read all the answers and did some rough work too!) Let me explain the way I understood this. :)

See it’s very simple…. :P

what we need to do ??? why these formula works here ???

Ok let me reiterate :

    we need to store two numbers in a cell(encode), In such a way that we can get them back.(decode).
    One simple way is concat them using a separator :D e.g., (2-3) if 2 and 3 are the numbers we need to club together… But its given array is not String. Alas !!!

    So what can we do ??? need to solve it numerically only :P
    Okay one more way let say i have numbers in range [0 - 9] i mean all single digit numbers… Take for example i want to encode 2 and 3 together so what i will do is… i will do 2 * 10 + 3 = 23…

    Now to get 2 : 23 / 10 => 2
    and to get 3 : 23 % 10 => 3

    yeaahhhhh !!! it works ….

    hold on :( we are asked on ’n’ sized array not array of size 10 !!!
    Think same logic works for two digit numbers too..

    e.g., 12 & 13…. “12 * 100 + 13 = 1213″ similarly you can proceed to get those 12 and 13 back. :)
    Finally get to our point …
    So take a final example :P let say we have an array of size 5.. so elements are {3, 0, 1, 4, 2}

    here also you can apply same logic…
    e.g., 3 and 4 are meant to be encoded… so (3 * 5 + 4 = 19) or (3 + 5 * 4 = 23)
    to get 3 : 19 / 5 = 3 or 23 % 5 = 3
    to get 4 : 19 % 5 = 4 or 23 / 5 = 4

    common dude now generalize it ….. and that’s the answer..
    If “x” and “y” are meant to be encoded together the formula would be “(x * n + y)” or “(x + n * y)”. where n is the size of array.
    yes the generalization is correct but instead of writing ( x * n + y ) I would write the answer as { ( x % n ) * n + y }… Why the heck this modulo operator here in between ????
    Because while updating the array you would be storing the value obtained from this formula.
    in the sense let say you updated 1st cell, {3 , 0, 1 , 4, 2} turned into {23, 0, 1, 4, 2},
    Now when you wanted to encode 1st and 3rd cell value (3 & 1) but dude where is 3 ??????? No where !!!! you converted it to 23 remember ??????
    Exactly there for that modulo :D :D to get “3” from “23″ as 23 % 5 = 3.
    To decode it at last step just divide by “n” you get your answer cheers…(Do I really needed to explain this point ? wasn’t it intuitive ? :D :P )

Note: i considered “x” and “y” for simplicity x = arr[i] and y = arr[arr[i]]

*/
