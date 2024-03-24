# How to install on local #

1. Спочатку треба зареєструватися на GitHub (https://github.com/). Після цього надішліть мені логін та email щоб я надав цьому новому аккаунту доступ вносити зміни в проект.
2. Далі треба встановити git (https://git-scm.com/download/win)
3. Після встановлення відкриваємо GitBash
![image](https://github.com/G1lmer/nf-13/assets/32224361/4289dc34-38dc-4ceb-8889-a6b9a55100ca)

**І виконуємо ці дві команди:**
```
git config --global user.name "John Doe"
git config --global user.email johndoe@example.com
```
4. Відкриваємо проект на GitHub https://github.com/G1lmer/nf-13 і натискаємо Open with Visual Studio
![image](https://github.com/G1lmer/nf-13/assets/32224361/818641d9-1e29-4fca-bd86-ea74b4792a0d)

6. З main гілки переходимо на гілку calculator
   ![image](https://github.com/G1lmer/nf-13/assets/32224361/a7a28abc-e752-43e4-8e4c-0e2d1eea1238)
   
7. Тепер треба відкрити проект як CMake проект. Для цього натискаємо File->Open->CMake
![image](https://github.com/G1lmer/nf-13/assets/32224361/ccc92c1b-2e5e-4cf8-b2ad-23ad90b9201b)

**Знаходимо цей самий проект і обираємо в ньому кореневий файл CMakeLists.txt**

![image](https://github.com/G1lmer/nf-13/assets/32224361/7a9002b7-fb51-47ef-97ae-37a675814102)

8. Натискаємо Ctrl+Shift+B щоб зібрати проект.
9. Змінюємо Startup Item на calculator_main
![image](https://github.com/G1lmer/nf-13/assets/32224361/2308f31c-43ea-436e-82f5-9b49fb115324)

11. Натискаємо Ctrl+F5 щоб запустити


### Architecture ###
![image](https://github.com/G1lmer/nf-13/assets/32224361/ab71b02d-1217-4001-8d35-b9537d1c15bb)

![image](https://github.com/G1lmer/nf-13/assets/32224361/677935a1-46cb-4465-b9cb-5213cca5d807)


### How to push changes ###
1. Створіть нову гілку с гілки calculator 
![image](https://github.com/G1lmer/nf-23/assets/32224361/c1554ac9-4194-463f-b0d5-ab8a4313dc0d)

2. Зробіть усі необхідні зміни в коді
3. Зробіть git commit
![image](https://github.com/G1lmer/nf-23/assets/32224361/723d5b1c-46ae-43d8-b2bf-5b4b1f30caff)

![image](https://github.com/G1lmer/nf-23/assets/32224361/c749ee68-a6ae-4d0a-88c7-8857c2ea14c4)

4. Зробіть git push
![image](https://github.com/G1lmer/nf-23/assets/32224361/fd183e3c-354d-4db6-a604-e8e027a4f29d)

5. Cтворіть pull request. Для цього перейдіть сюди https://github.com/G1lmer/nf-23/pulls і натисніть New pull request
![image](https://github.com/G1lmer/nf-23/assets/32224361/785ad914-c6f1-4471-a8ed-686522f83a50)

6. Pull request має бути з вашої гілки в гілку calculator
![image](https://github.com/G1lmer/nf-23/assets/32224361/0a7d8874-2234-462c-b5fd-28c23b81ea72)

7. Знов натисніть Create pull request
![image](https://github.com/G1lmer/nf-23/assets/32224361/bfaa57f9-d411-480d-ae69-a6fec4305891)







