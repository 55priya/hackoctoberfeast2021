import time
import pyautogui
pyautogui.FAILSAFE = False
while True:
    time.sleep(10)
    for i in range(0, 100):
        pyautogui.moveTo(i*5, i*5)
