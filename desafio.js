class Heroi {
    constructor(nome, idade, tipo) {
        this.nome = nome;
        this.idade = idade;
        this.tipo = tipo;
    }

    atacar() {
        let ataque;

        switch (this.tipo.toLowerCase()) {
            case "mago":
                ataque = "usou magia";
                break;
            case "guerreiro":
                ataque = "usou espada";
                break;
            case "monge":
                ataque = "usou artes marciais";
                break;
            case "ninja":
                ataque = "usou shuriken";
                break;
            default:
                ataque = "realizou um ataque desconhecido";
                break;
        }

        console.log(`O ${this.tipo} atacou usando ${ataque}`);
    }
}
const mago = new Heroi("Gandalf", 1000, "mago");
mago.atacar(); 
const guerreiro = new Heroi("Conan", 30, "guerreiro");
guerreiro.atacar(); 
const monge = new Heroi("Dhalsim", 35, "monge");
monge.atacar(); 

const ninja = new Heroi("Naruto", 17, "ninja");
ninja.atacar(); 
