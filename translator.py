import googletrans as x
import pyttsx3

# import pyaudio
# s=pyttsx3.init()
# reco=sr.Recognizer()
# try:
#     with sr.Microphone() as source:
#         print("say")
#         voice = reco.listen(source)
#         text=reco.recognize_google(voice)
#         print(text)
 
# except:
#         print("NOT AUDIBLE")




trans=x.Translator() 

print(x.LANGUAGES)
ans = trans.translate('MY NAME IS HUSSAIN', dest='ar')
print(ans.text)

