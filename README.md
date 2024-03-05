# Task 004. Уровень medium. Some more files.
Добрый день, коллеги. Сегодня мы продолжаем решать задачи в нашем peer to peer канале Peer Education!

Правила: первое сообщение в канале.

#### Задание

Сегодня мы напишем ряд утилит для работы с файлами и файловой системой. Все они являются учебными, но помогут вам в будущем при работе с этим видом задач. 

<image src="images/utils.jpg">

#### Задача 1. Необходимо реализовать программу для определения, является ли второй файл дубликатом первого или нет. Поиск различий должен осуществляться средствами языка Си. Если второй файл является дубликатом, необходимо удалить его. Если оба файла пустые, второй является дубликатом. На вход подается две строки, которые содержат путь до файлов. Если один из файлов не существует вывести ошибку. В случае любой ошибки выводить на экран "Puck you, Verter!". Сборка проекта должна осуществляться с помощью Makefile, стадия сборки find_duplecates, бинарник должен компилироваться в папку bin и называться find_duplecates.

Что такое шифрование?
Шифрование — это процесс кодирования информации с целью предотвращения несанкционированного доступа. В случае кражи или утечки зашифрованные данные будут недоступны для прочтения без соответствующего ключа.

Большинство пользователей не знают, что много информации уже защищается с помощью технологии шифрования. Например, онлайн-магазины и Интернет-банкинг не работали бы без хорошего шифрования. Шифрование предназначено для защиты средств и личной информации. В корпоративной среде шифрование следует использовать для защиты интеллектуальной собственности и инновационных разработок компании.

#### Задача 2. Необходимо реализовать программу для шифрования данных в файле. Алгоритм шифрования - шифр Вижинера. Ключевое слово для шифрования peeredu. Шифроваться должны только символы латинского алфавита. Сборка проекта должна осуществляться с помощью Makefile, стадия сборки cryptography, бинарник должен компилироваться в папку bin и называться cryptography. Гарантируется, что в файле записаны только буквы латинского алфавита и пробелы. В случае любой ошибки выводить на экран "Puck you, Verter!"

Изначально (1963 год) ASCII была разработана для кодирования символов, коды которых помещались в 7 бит (128 символов; 27=128), а старший бит №7 (нумерация с нуля) использовался для контроля ошибок, возникших при передаче данных. В первой версии кодировались только заглавные буквы. Полосы (группы по 16 символов) № 6 и 7 (нумерация начинается с 0) были зарезервированы для дальнейшего расширения. Велись споры, использовать ли эту область для строчных букв или управляющих символов.

В 1965 году была подготовлена новая редакция ASCII, которая так и не была опубликована. Она не использовалась нигде, кроме терминалов IBM 2260/2848 и принтеров IBM 1053 — и то без заглавных букв и некоторых символов. Окончательная спецификация была опубликована в 1967 году, и все содержащиеся в ней символы в дальнейшем не меняли своего положения в таблице.

Со временем кодировка была расширена до 256 символов (28=256); коды первых 128 символов не изменились. ASCII стала восприниматься как половина 8-битной кодировки, а «расширенной ASCII» называли ASCII с задействованным 8-м битом (например, КОИ-8).

#### Задача 3. Бонус. Необходимо реализовать программу, для сортировки файлов в директории. Сортировка должна быть выполнена по сумме ASCII кодов символов находящихся в файле. Программа должна принимать на ввод путь до директории. В качестве результата, нужно добавить в название файла <номер>_, от самого маленького до самого большого. В случае любой ошибки выводить на экран "Puck you, Verter!". Сборка проекта должна осуществляться с помощью Makefile, стадия сборки ascii_sort, бинарник должен компилироваться в папку bin и называться ascii_sort. Гарантируется что файлов в директории будет не больше 9.

Дедлайн на эти задания: **Пятница 08.03.2024 23:59**

Увидимся в понедельник!