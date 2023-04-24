fn main() {
    println!("Hello, world!");
    //let x = 5;
    let mut x = 5;
    println!("The value of x is : {}", x);
    x = 6;
    println!("The value of x is : {}", x);
    //Shadowing
    let y = 5;
    let y = y + 1;
    let  y = y + 5;
    println!("The value of y is : {}", y);
    // We cant not shadowing from types of variables
    //let spaces = "  ";
    //let spaces = spaces.len();

    //Scalar types
    //Integers, floating, boolean and Character
    // Integers i8 - u8, ... i128 - u128 and last isize or usize "arch"
    //Float values, default is 64, so for 32 you define.
    let z: f32 = 5.000001;
    println!("The value of x is : {}", z);
    //Examples
    let sum = 5+10;//This can be integer .... what?
    let difference = 55.5 - 6.66;
    let multiplication = 5 * 20;
    let division = 57.6 / 45.6;
    let remainder = 43 % 5;
    //Warning if I not use the variable
    println!("The value of remainder is : {}", remainder);
    println!("The value of remainder is : {}", division);
    println!("The value of remainder is : {}", multiplication);
    println!("The value of remainder is : {}", difference);
    println!("The value of remainder is : {}", sum);
    //bool
    let t = true;
    let f : bool = false; //Explicit
    println!("The value of \"f\" is : {}", f);
    // Char
    let c = 'z';
    let cstring = "ztring";

    //Compund Types??
    // Like struct or map, vectors?
    let tup: (i32, f64, u8) = (500, 6.5, 1);
    let (x, y, z) = tup;
    println!("Value of y in the tup: {}", y);
    let five_hundred = tup.0;

    // So tupples are not arrays
    let array = [1, 2, 3, 4, 5];
    // data is stored in the stack and not the heap
    let arraydefined: [i32; 5] = [1, 2, 3, 4, 5];
    let arraytest = [3; 5]; // = [3, 3, 3, 3, 3]
    let first = array[0];
    another_function();
}

fn another_function()
{
    println!("New function");
}
