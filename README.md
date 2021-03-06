# P00: Project 1

**Author(s)**: *Gerardo Soto & Aaron Christson*

**Google Document**: *https://docs.google.com/document/d/1OnYtF9OHpxGGOFgn7rhAzPf1oIvjDrZAU22cBT8vuME/edit?usp=sharing*


---
## Purpose :sparkles: :revolving_hearts: :dizzy:

In no more than one paragraph, describe the problem your product will solve, and how.

The problem we were having was that throughout the day you might be feeling sad because of something that happened or something that is about to happen. In order to regulate this, we will be making a motion "smart" lamp that turns on with motion and adjusts its light depending on the time of day to maximize positive feelings. It will also be able to react to the weather and shine the best possible light for what the weather is like.


## Initial Design Plan :crystal_ball: 

Our initial design plan consists of 1 arduino, long enough wiring, 2 rgb lights, 2 motion sensors, and a small power supply to give power to the lights.

The motion sensor will be attached to the base of a door where it will detect whether or not someone has walked into the room, making the lights turn on. Another sensor will detect movement within the room, resetting the time before the fade back off. The purpose of the lights is to create an ambiance and bring the right feeling to the user during any given time of day. The arduino will be constantly keeping time in the background ensuring that the right light colors are activated when the user enters the room. If it is morning time, for example, the light will emit a pink/orange hue, signifying that it is a new day, and giving the user a sense of life and brightness. Another example can be night when the colors emitted can be a cool shade of purple and cyan, giving the user a light source that is not too blinding. We hope to allow the user an interface to adjust hues and brightness as they wish, as well as more features that we have in mind.

![The image of our design](images/design1.png "An image of our design.")



### Colors throughout the day :rainbow:
Time of day | Hue of color
------------|-------------
00:00 - 4:00 | Dark Blue :cyclone: / Violet :purple_heart:
4:00 - 6:00 | Purple :purple_heart: / Pink :heartbeat:
6:00 - 8:00 | Pink :heartbeat: / Orange :tangerine:
8:00 - 12:00 | Orange :tangerine: / Yellow :banana:
12:00 - 15:00 | Yellow :banana: / White :white_circle: / Cyan :gem:
15:00 - 18:00 | Cyan :gem: / Blue :atm:
18:00 - 00:00 | Blue :potable_water: / Dark Blue :cyclone:
  
## Files :file_folder:

README.md - Contains informtion about the project.

example-README.md - Contains a template for the readme file.

LICENSE - license file

images - a directory that contains an image. (this was here when we joined the github classroom.)

## Summary 

The initial plan evolved from a simple binary lamp to a colorful, gold-standard, industry-leading ambient desk lamp that brings a whole new mood to your room as soon as you walk in. The code was fairly simple, but the difficulties arised with the rgb and manipulating the lights, and importing libraries and using the realtimeclock. In all honesty, the real time clock was the most difficult part of the project. Implementing the time in our code was not difficult, but getting the clock to actually work was, and we needed to strip so jumper cables to be able to connect to it at the end of the day. All in all, embedded systems is proving to be a true challenge.

## Instructions

1. Connect components as shown in the picture above.
2. Run arduino IDE and start MotionDetector.ino
3. Set up heat/motion sensor in any desired place in room, preferably where motion occurs the most.
4. Profit.

## Errors and Constraints

** - Only works in partially lit situations. **
** - RTC can be faulty, designed for RTC model 1307. **
** - Color transitions from color to color are not smoothed out yet. **

## Reflections
During the design process of how this was to work, we spent a lot of time looking at sample code, since for us it was our first time working with an Arduino environment. Looking back at this assignment, we learned a lot about how resistors affect RGB LEDs and got a better idea as to what resistance we need to get the desired colors. Figuring out the colors their respective times was actually fun. The not so fun part was working the the RTC itself. We scoured the internet looking at forum after forum and all sorts of documentations looking for clues to see why our RTC would not work. The code compiles but it just seems to be a hardware issue.

  Overall, we think this was a great experience, and we think that tinkering with Arduinos can be a great way to learn programming, but we simply had a lot of issues with connectivity when we got down to it. At one point we had a problem with compilation itself, and spent quite a bit of time debugging what the issue was (A simple disconnect from the computer fixed the issue). Working with Arduinos was fun, and we look forward to the next challenge.

## Self Evaluations

**Ideation, Brainstorming, Design:**

Gerardo Soto: 5

Aaron Christson: 5

**Code Creation:**

Gerardo Soto: 5

Aaron Christson: 5

**Documentation Creation**

Gerardo Soto: 5

Aaron Christson: 5

**Teamwork & Participation** 

Gerardo Soto: 5

Aaron Christson: 5

## References :books:

*https://learn.adafruit.com/pir-passive-infrared-proximity-motion-sensor/using-a-pir-w-arduino* - We used this to file to understand how to connect a motion sensor to an arduino.

*https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds/parts* - We used this to understand how to connect an rgb led light to an arduino.

*https://www.tweaking4all.com/hardware/pir-sensor/* - Used this to understand how the PIR Sensor works and how to tune it. 

*https://learn.adafruit.com/ds1307-real-time-clock-breakout-board-kit/understanding-the-code* - Used some code from this site to dictate time. 

*https://forum.arduino.cc/index.php?topic=187823.0* - Resource for how to get rid of an error with RTC.
