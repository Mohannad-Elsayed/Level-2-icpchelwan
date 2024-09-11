موضوع مهم وهنخصصله الكام رسالة الجايين
# Time and Space complexities
-# ازاي تحسب بالتقريب الوقت والمساحة اللي هياخده الالجورزم قبل ما تكتب الكود
## Time complexity
في الاول خالص الكومبلكستي بتاعة الكود بتتحسب بكام خطوة الكود عملها
يعني مثلا كود زي دا 

```cpp
int a, b; 
cin >> a >> b;
cout << a+b;
```
دا بيعمل خطوة واحدة، بياخد رقمين ويطلع الناتج. فبنقول عليه
`O(1)`
ودي معناها ان الكود بيعمل عدد خطوات ثابت بغض النظر عن الارقام اللي داخله،
```cpp
int a, b; 
cin >> a >> b;
int c = a + b;
int d = a - b;
cout << c + d;
```
دا برضه 
`O(1)`
لانه بيعمل عدد خطوات ثابت
```cpp
int a;
cin >> a;
for (int i = 0; i<5; i++)
    a += a;
```
دا كمان 
`O(1)`
لان - بغض النظر ان في لووب، فهي بتلف 5 مرات فقط بعض النظر عن الرقم اللي داخل

طب لنفرض انك هتاخد مجموعة ارقام وتعمل عليها عمليات معينة؟ 
هنا ال`complexity` بتبقي اقل حاجة`O(N)` 
ودي معناها، هتلوب علي الارقام مرة واحدة علي الاقل
```cpp
int n; 
cin >> n;
int arr[n];
for (int i = 0; i<n; i++)
    cin >> arr[i];
```
دا كدا`O(N)` عشان عملت لووب بتلف علي  الارقام كلها
- لاحظ ان اي مسألة هيديك شوية ارقام، فاقل`time complexity` تقدر توصلها هي ال`O(N)`، لانك لازم تعدي علي كل رقم مرة واحدة علي الاقل لما تيجي تخزنه
- لاحظ ان ال`N` هنا بتمثل عدد الارقام اللي داخلة
- لو في كذا لووب ورا بعض، فالكومبلكستي النهائية بتبقي مجموع الكومبلكستي بتاعة كل لووب
```cpp
for (int i = 0; i<n; i++) // O(N)
    // do stuff in O(1)
for (int i = 0; i<n; i++) // O(N)
    // do stuff in O(1)
for (int i = 0; i<n; i++) // O(N)
    // do stuff in O(1)
```
كدا الكومبلكستي النهائية بتاعة الكود دا`O(3 * N)` 
بس مش بنكتب ال`constant` دا قبتبقي`O(N)` بس

شوف بقا الكود دا، بيحسب مجموع الارقام بين رقمين
```cpp
int a, b, cnt = 0;
cin >> a >> b;
for (int i = a; i <= b; i++) // O(b-a)
    cnt += i;
```
هنا بالرغم ان مفيش ارقام في المسألة، بس ال`complexity` برضه`O(N)` 
تخيلها انه هيلف علي الارقام في الرينج دا، ولو الماكسمم بتاع الارقام دا مش هيعدي`N` فكدا التايم`O(N)` 

طيب لو اديتك مجموعة ارقام، وعند كل رقم طلبت منك اكبر رقم علي شماله
```cpp
int n; 
cin >> n;
int arr[n];
for (int i = 0; i<n; i++) // O(N)
    cin >> arr[i];
for (int i = 0; i<n; i++){ // O(N)
    int minimum = 1e9;
    for (int j = 0; j<i; j++) // O(N) inside O(N)
        minimum = min(arr[j], minimum);
    cout << minimum << ' ';
}
```
بما ان هيديني مجموعة ارقام بال`complexity` بشكل مبدأي كدا`O(N)` اللي هي عدد الارقام دول
وعند كل رقم انا بعمل لووب علي الارقام كلها تاني، فكدا عملت`O(N)` كمان جوا كل`N` بعملها
فكدا ال`complexity` بقت`O(N + N*N)` او`O(N + N^2)` 
الضرب معناه ان عند كل رقم بعمل الجورزم تاني بياخد برضه`complexity O(N)`

- في العادي مش بنهتم بال`N` اللي لوحدها دي فبنقول عليه`O(N^2)` علطول

- طب لو عامل 3 لووبس كلهم بيلفو علي ال`N` 
هتبقي`(N*N*N)` او`O(N^3)`

طب لو عند كل رقم بتعمل باينري سيرش علي الرقم دا في`sorted array` ؟ 
قلنا ان الكومبلكستي بتاعة اي الجورزم فيه مجموعة ارقام هو علي الاقل`O(N)` وكومبلكستي الباينري سيرش ب`O(log(N))`، فكدا الكومبلكستي النهائية 
`O(N * log(N))`

### function calls
كود زي دا
```cpp
int n, tmp; cin >> n;
vector<int> v;
for (int i = 0; i<n; i++){ // O(N)
    cin >> tmp;
    v.insert(v.begin(), tmp); // O(N)
}
```
لما نلاقي فانكشن بتتنادي عند كل رقم، لازم نعرف ال`complexity` بتاعة الفانكشن دي عشان نضربها في`N`
فمثلا الكود دا هيبقي`O(N * N)` لان الكومبلكستي بتاعة فانكشن ال`insert` ب`O(N)` 
غير مثلا الكود دا
```cpp
int n, tmp; cin >> n;
vector<int> v;
for (int i = 0; i<n; i++){ // O(N)
    cin >> tmp;
    v.push_back(tmp); // O(1)
}
```
هنا فانكشن ال`push_back` اخرها`O(1)` فالكومبلكستي النهائية للكود`O(N * 1) = O(N)`

### Queries
لو في مسألة هيديك ارقام وبعدين`queries`
فالكومبلكستي بتاعة كل واحدة بتتحسب لوحدها وبعدين بيتجمعة علي بعض
يعني لو هديك`n` من الارقام وبعدين`q queries` هقولك الرقم دا موجود ولا، فلو هتلف علي الارراي كلها عشان تعرف الرقم موجود ولا لا فكدا الكومبلكستي بقت
`O(N + Q * N)` 
```cpp
int n, q, query; cin >> n >> q;
int arr[n];
for (int i = 0; i<n; i++) // O(N) part
    cin >> arr[i];
for (int i = 0; i<q; i++){ // O(Q * N) part
    cin >> query;
    for (int i = 0; i<n; i++)
}
```

### Testcases
لو مديك كذا تيست كيس، فممكن تشوف هتحل تيست واحدة بس ازاي، وليكن جبت الجورزم الكومبلكستي بتاعته`O(N * log(N))` 
وتبقي دي الكومبلكستي بتاعتك

### ازاي تحسب الوقت بالتقريب
كل اللي عملناه فوق عشان بس نعرف بالتقريب الكود هيعمل كام خطوة 
وبما اننا مهتمين بس بال`worst case scenario` 
هنجيب الكومبلكستي اللي حسبناها ونبدل بدل الحروف دي اكبر قيمة ممكن يوصلها كل متغير فيهم
يعني لو هي`O(N log(N))` وال`N` اخرها 10000، هنحط ال10000 دي مكان ال`N` ونحسب الناتج
هيطلعلنا رقم، الرقم دا هو بالتقريب الكود هيعمل كام خطوة في اسوأ حالة، **الثانية علي كود فورسيز في حدود`100 مليون`** خطوة، فلو التايم ليميت بتاعنا ثانية واحدة، فالرقم اللي طلعلنا من الحسبة اللي فاتت لازم يبقي حوالين`100 مليون` 
اعلي بشوية اقل بشوية.

طب لو اعلي بكتير جدا يعني ضعفة او 10 اضعافه؟ كدا الكود دا هيجيب تايمم ليميت 
يعني لو عدد الارقام اخره 10000 والكومبلكستي بتاعتنا`O(N * log(N))` فالحسبة هتكون كدا
`10000 * log_2(10000) = 132877` اللي هو اقل بكتييير من 100 مليون
لكن لو عدد الارقام كان 10000000 فكدا مش هينفع الكومبلكستي دي 
`10000000 * log_2(10000000) = 232534966` يعني الكود هيعدي الثانية، تقدر تقسم الرقم اللي طلع علي 100 مليون عشان تعرف بالتقريب هياخد كام ثانية
`232534966/100000000 ~ 2.5s` 

- الصورة اللي مبعوتة في الاخر فيها التايم كوبلكستي المناسبة لكل رينج`n`

## Memory complexity
دي بقا اسهل شوية من التايم، انت هتشوف استخدمت كام متغير، وتضرب اللي استخدمته في السايز بتاع المتغير دا يطلعلك عدد البايتس اللي استخدمتها، بعدين تحولها لميجا بايت

```cpp
int x, y; cin >> x >> y;
```
هنا استخدمت متغيرين فقط، كل واحد 4 بايت عشان`int` فكدا استخدمت في النهاية 8 بايت
- بنقول علي دي`O(1) space complexity`

```cpp
int n; cin >> n;
int arr[n];
```
اما هنا عملت`array` الحجم بتاعها`n`، فكدا هضرب اكبر قيمة ممكن توصلها ال`n` في السايز بتاع ال`int`
` max_n = 1e6`  `1e6 * 4 = 4e6 bytes ~ 4 kilobytes`
- بنقول علي دي`O(N) space complexity`

```cpp
int n; cin >> n;
int arr[n][n];
``` 
هنا عملت`2d array` فكدا كانك خرنت`n*n` متغير
` max_n = 1e6` `1e6 * 1e6 * 4(size of int) = 4e12 bytes ~ 3725.29 Giga Bytes !!!!`
- بنقول علي دي`O(N^2) space complexity` 

- كل ال`stls` بتشتغل بما يقارب ال`O(N) space complexiy` فبتتحسب بنفس الحسبة بتاعة ال`arrays` لكنها بتخزن حاجات تانية زي السايز بتاعها ووو.. فبتاخد سايز زيادة عن ال`arrays` لكنه مش كبير
- حاجة مهمة جدا ولنفرض انك عايز تعمل`frequency array` لكن سايز كبير جدا وليكن`1e9` وانت مهتم فقط بان الرقم موجود او لا
فممكن تعمل```cpp
<vector<bool```، 
مش دا مختلف شوية لانه بيخزن البايت ك`bit` فكدا هتقدر تخزن 8 اضعاف اللي تخزنه ب`bool arr` عادي
ودي موجودة بس في حاجتين
```cpp
vector<bool>
bitmask<>```
والاتنين في ال`STLs`
فمثلا في المثال اللي فوق، 
```cpp
vector<bool> v(int(1e9));
```
دا كدا هياخد 
` 1e9 * 1(size of boolean) / 8 ~ 128 MB`


## ازاي تسرع الكود بتاعك
لاغلب المسائل علي كود فورسيز كفاية اوي تضيف السطرين
```cpp
ios_base::sync_with_stdio(0);
cin.tie(0);
```
بعد ال`main()` علطول
وبدل ما تستخدم
`endl` 
تحط 
`'\n'`

وبس كدا، لو لسة مش واضحة حاجة تقدر تبعت علي ال`help` 

- وطبعا شعارنا دايما سيرش واعرف اكتر، فدي شوية لينكات تقدر تقرا اكتر عن التايم كومبلكستي

[A Time Complexity Guide](https://codeforces.com/blog/entry/104888)

[How to determine the solution of a problem by looking at its constraints?](https://codeforces.com/blog/entry/21344)

[How many instructions can be executed in Codeforces and TopCoder judge PCs in one second?](https://www.quora.com/How-many-instructions-can-be-executed-in-Codeforces-and-TopCoder-judge-PCs-in-one-second)

[الكود بتاعك هيجيب تايم ليميت؟](https://www.facebook.com/photo/?fbid=585240173708276&set=a.460433109522317)

[Blazing fast io library](https://judge.yosupo.jp/submission/193613)