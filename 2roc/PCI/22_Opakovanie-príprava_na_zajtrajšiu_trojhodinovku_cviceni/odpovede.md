# odpovede

- Vymenovať rozdelenie sietí podľa rozlohy:
    - PAN - malá sieť (Bluetooth)
    - LAN - trocuh väčšia sieť (kancelária, škola)
    - MAN - ešte väčšia sieť (prepojenie LAN sietí v meste)
    - WAN - najvǎčšia sieť (internet, štáty, kontinenty)
- Vysvetliť a popísať komunikáciu v Konvergovaných sieťach:
    - integrujú rôzne typy komunikačných služieb a aplikácií do jednej infraštruktúry
- Vedieť popísať bezpečnostné hrozby, bezpečnostné riešenia:
    - Malware
        - do malweru spadajú červy, trojánske kone, ransomware, adware, ...
        - antivirus, firewall, aktualizácia softvéru
    - Phising
        - získavanie citlivých údajov (heslá, prihlasovacie údaje), tým, že sa predstavuje ako dôveryhodná osoba alebo organizácia
        - výcvik používáteľov, monitorovanie, ...
    - DDoS
        - za cieľ majú zahltenie alebo vyčerpanie zdrojov, čo vedie k nedostupnosti služieb
        - sieťové filtre, rozloženie záťaže, ...
    - Data breach
        - je to, keď uniknú citlivé informácie ako osobné údaje, firemné tajomstvá, finančné údaje
        - šifrovanie údajov, riadenie prístupu, audity zabezpečenia
    - Sociálna inžinieria
        - manipulácia ľudí za účelom získať prístup k dôveryhodným informáciám alebo systémom
        - vzdelávanie používateľov o potenciálnych hrozbách a bezpečnostných postupoch
    - Zraniteľnosti softvéru
        - chyby v softvérových aplikáciách, ktoré môžu byť zneužité útočnikom
        - aktualizácia softvéru, penetračné testovanie

-  Obmedziť prístup k zariadeniu a uloženie aktuálnej konfigurácie použitím príkazov v CISCO IOS:
    - privilegovaný prístup:
        - enable secret <heslo>
    - vzdialený prístup:
        - line vty 0 4 \n
        - password <heslo>
        - login
    - konfiguračný režim:
        - line console 0
        - password <heslo>
        - login
- Overiť spojenie medzi koncovými zariadeniami - ako?
    - príkaz ping
    - tracert
- Popísať komunikáciu zariadení v tej istej sieti a komunikáciu medzi zariadeniami vo vzdialených sieťach.
    - LAN
        - pomocou privatnyćh IP adries
    - WAN
        - pomocou verejných IP adries (adresa routra)
        - musí ísť cez default gateway

-  Nakresliť a porovnať ISO OSI a TCP/IP modely sietí:
    - ISO OSI
        - Fyzická vrstva (L1)
            - káble, konektory
        - Linková vrstva (L2)
            - prenos dát, detekcia chýb
        - Sieťová vrstva (L3)
            - smerovanie dát, IP adresy
        - Transportná vrstva (L4)
            - spoľahlivý prenos dát medzi koncovými zariadeniami
            - segmentácia, kontrola toku dát
            - protokoly TCP, UDP
        - Relačná vrstva (L5)
            - komunikácia medzi aplikáciami na rôznych zariadeniach
            - poskytuje služby pre vytvorenie, udržanie, a ukončenie relácie medzi aplikáciami
        - Prezenčná vrstva (L6)
            - konverzia a kódovanie dát medzi aplikáciami
        - Aplikačná vrstva (L7)
            - poskytuje prístup k sieťovým službám
            - HTTP, FTP, SMTP, DNS
    - TCP/IP
        - Sieťová vrstva
            - adresácia, smerovanie a prenos dát
            - protokol IP
        - Transportná vrstva
            - prenos dát
            - protokoly TCP, UDP
        - Internetová vrstva
            - adresácia, segmentovanie, fragmentácia a zlúčovanie paketov
        - Aplikaćná vrstva
            - prístup k sieťovým službám
            - HTTP, FTP, DNS, SMTP
- Popísať procesy prebiehajúce na jednotlivých vrstvách modelov ISO OSI a TCP/IP

-  Definovať funkciu protokolov: HTTP, DNS, FTP, POP, SMTP, IMAP, TELNET
    - HTTP
        - web stránky
        - prenos hypertextových dokumentov
        - komunikácia medzi webovým prehliadačom a webovým serverom
    - DNS
        - prevádza čitateľné doménové mená na IP adresy
    - FTP
        - prenos súborov medzi klientom a serverom
    - POP
        - sťahuje emaily zo servera
    - SMTP
        - odosielanie emailov
    - IMAP
        - nesťahuje emaily
        - synchronizácia medzi serverom a klientom
    - TELNET
        - vzdialený prístup na počítač alebo server
- Porovnať protokoly HTTP a HTTPS, FTP a SFTP, TELNET a SSH
    - HTTP vs HTTPS
        - HTTPS je šifrované
    - FTP vs SFTP
        - SFTP je šifrovaný
    - TELNET vs SSH
        - SSH je šifrované
-
