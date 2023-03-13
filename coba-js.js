function helloWorld() {
  console.log("hello world");
}

function helloName(name) {
  console.log("hello " + name);
  console.log(`hello ${name}!`);
}

function helloLagi(name, age) {
  console.log(`hello ${name}. I'm ${age} years old`);
}

// contoh perulangan
for (let a = 0; a < 5; a++) {
  console.log(`Perulangan ke-${a}`);
}

helloWorld();
helloName("Rizal");
helloLagi("Rizal 2", 19);
