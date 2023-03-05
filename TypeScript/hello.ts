const greet = (person: string, date: Date) => {
    console.log(`Hello, ${person}, today is ${date.toDateString()}!`);
}

greet("Dorraj", new Date());

export {} // had to add this line to remove error caused by "redeclaration of block-scoped variable"