# PRIM - Robotika

Učebnice robotiky se skládá ze dvou částí. Každá využívá jinou technologii. Jedná se o Arduino a Micro:Bit. Stačí si jen vybrat, kterou technologii pro výuku robotiky využijete. Struktura obou částí a příkladů je prakticky stejná.

[Arduino - obsah](#arduino) 

[Micro:Bit - obsah](#microbit) 

# Arduino

Učebnice ARDUINO obsahuje sadu metodických materiálů pro učitele se zaměřením na programování, odráží zrevidovaný rámcový vzdělávací plán z informatiky a naplňuje některé z kompetencí, které jsou v něm zařazené.

Termín „Arduino“ v sobě obsahuje jak hardware, tak i software. Arduino je prototypovou a otevřenou platformou založenou na snadno použitelném hardwaru a softwaru. Programovatelné desky Arduino zpracovávají vstupy a s použitím programového kódu vytvoří výstup. K desce Arduino lze přidat řadu dalších hardwarových komponent. S využitím open source knihoven dostupných na webu lze Arduino využít pro širokou škálu projektů, od extrémně jednoduchých až po vysoce komplexní. Tím je tato platforma velice flexibilní.

Programátoři vytvářejí roboty, dálkově řízená vozidla, domácí automatizační zařízení atd. Arduino získalo popularitu díky své jednoduchosti a cenové dostupnosti. Pro začátečníka, včetně dítěte, je relativně snadné s programováním na platformě Arduino začít. Výukový potenciál lze spatřovat v pokrytí několika oblastí jako design, elektronika, embedded systémy a v neposlední řadě programování. Tyto oblasti se navzájem prolínají a doplňují.

Pro práci s Arduino pomocí této učebnice se nevyžadují žádné předchozí zkušenosti, ani pochopení základů elektroniky. Učebnice je rozdělena do kapitol, které obsahují příklady odstupňované podle náročnosti. Každá kapitola obsahuje materiály pro učitele v podobě podrobných průvodců hodinami, pracovními listy pro studenty a podrobnými průvodci teorií, vztahující se k probíranému tématu. V celé učebnici je kladen důraz na samostatné plnění úkolů, které postupně odhalují možnosti platformy Arduino.

## OBSAH

1. [Úvod](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/_Uvod) 
  * Doporučení, jak pracovat s učebnicí.
  * Popis jednotlivých komponent v sadě ARDUINO. 
  * Popis základní desky ARDUINO a programovacího rozhraní.
  * První nastavení programovacího rozhraní.
  * Řešení problémů.
  * Nutné základy pro první program - kontaktní pole, ohmův zákon, tlačítka, LED.
2. [První program](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/01_PRVNI_PROGRAM) 
  * Digitální vstup a výstup s popisem funkcí pro jejich ovládání.
  * Podrobný popis zapojení obvodu s LED diodu.
  * Základní seznámení s jazykem Wiring.
  * Popis rozhraní Arduino IDE pro nahrání kódu do desky.
  * Řešené problémy při zapojení LED diody.
  * Seznámení s programem Arduino IDE pro nahrávání kódu do desky.
  * Princip a zapojení piezzo bzučáku s podrobným vysvětlením.
  * Programový kód pro ovládání obvodu s bzučákem.
  * Technická část pro závěrečný projekt – Mluvící robot.
  * Vysvětlení řešení samostatných úkolů.
3. [LED Animace](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/02_LED_ANIMATION) 
  * Deklarace a používání vlastních funkcí.
  * Definice polí v Arduinu.
  * Použití příkazu cyklu for.
  * Programové kódy pro vysvětlení používání polí a cyklu.
  * Řešené problémy při zapojení sestavy LED diod.
  * Technická část pro závěrečný projekt – stojan na diody.
  * Vysvětlení řešení samostatných úkolů.
4. [Programujeme ovládání servo motorů](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/03_SERVO) 
  * Princip servomotorů.
  * Vysvětlení podmínkového příkazu if..else.
  * Příklad zapojení servomotoru.
  * Princip a zapojení potenciometru v Arduino pro ovládání servomotoru.
  * Programové kódy pro vysvětlení používání podmínkového příkazu if..else..
  * Řešené problémy při zapojení servomotoru.
  * Technická část pro závěrečný projekt – slunečnice.
  * Vysvětlení řešení samostatných úkolů.
5. [Programujeme RGB diody](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/04_RGB_LED) 
  * Seznámení se s RGB diodou a její funkčností.
  * Princip skládání barev a PWM.
  * Správné zapojení RGB diody s využitím zkušeností z předchozích příkladů. Zejména
se jedná o volbu rezistorů a jejich zapojení.
  * Zavedení pojmů a znalostí týkající se analogových výstupů a mapování hodnot.
  * Využití již zavedeného podmínkového příkazu if.
  * Zavedení vlastní funkce v programovém kódu.
  * Použití příkazu cyklu for.
6. [Programujeme ovládání DC motorů](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/05_MOTOR_DC) 
  * Pochopení principu stejnosměrného motoru.
  * Seznámení s principy tranzistoru.
  * Zapojení tranzistoru pro regulaci otáček motoru.
  * Zapojení externího napájení motoru.
  * Využití potenciometru pro regulaci motoru.
  * Projekt větráku.
7. [Měříme fyzikální veličiny](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/06_THERMO_DISPLAY) 
  * Získání dovedností při zapojování senzoru teploty.
  * Naučení se pracovat se sériovým monitorem.
  * Naučit se zapojit LCD display a zobrazovat hodnoty.
  * Připojování externích knihoven pro snazší programování.
  * Naučit se zobrazovat hodnoty na LCD displeji.
  * Projekt skleníku.
8. [Programujeme Mativocý LED displej](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/07_LED_MATRIX_ACCELEROMETER) 
  * Získání dovedností při používání maticového displeje.
  * Zobrazování jednoduchých symbolů na maticovém displeji.
  * Potenciometry při ovládání maticového displeje.
  * Princip hry Ping-Pong.
  * Spojení Akcelerometru a maticového displeje.
9. [Programujeme ovládání joystickem](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/08_JOYSTICK) 
  * Pochopit princip joysticku a jeho využití jako vstupní zařízení pro konstrukce na
bázi Arduina.
  * Sestrojit jednoduchou robotickou ruku za pomoci krokového motorku, servo motorku a
dílů vytištěných na 3D tiskárně.
  * Tuto ruku naprogramovat a nastavit tak, aby uměla vymáchat pytlík čaje v připraveném
hrníčku s vodou o požadované teplotě.
10. [Dálkové ovládání](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/09_IR_REMOTE_CONTROL) 
  * Princip IR ovládání.
  * Podrobný popis zapojení obvodu s IR diodu.
  * Zdrojový kód programu pro IR ovládání
  * Podrobný popis zapojení obvodu pro IR ovládání DC a servo motoru
  * Zdrojový kód tohot zapojení
  * Řešení možných potíží
  * Další úkoly pro samostatnou práci
11. [Semafor](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/10_SEMAPHORE) 
  * Popis přerušení.
  * Tlačítko a jeho zapojení
  * Zapojení obvodu pro jednoduchý semafor
  * Zdrojový kód pro jednoduchý semafor
  * Řešení možných potíží
  * Složitější úlohy pro semafor, včetně zapojení a zdrojového kódy
  * Další úlohy pro samostatnou práci
12. [Wiring - referenční příručka](https://github.com/Nowis75/PRIM/tree/master/Experiments/Arduino/Wiring%20-%20referec%CC%8Cni%CC%81%20pr%CC%8Ci%CC%81ruc%CC%8Cka)

# MicroBit

Učebnice MicroBit je zaměřena na výuku ....
>>>>>>> 607b483858657f764b765e752418c536257948c3
