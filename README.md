```diff
- Your README.md file should not contain any help text. All help text is in italics. Remove it.
- Your project idea is alright. 
- Pay attention to your Markdown formatting, such as two line breaks between things you want on separate lines.
- You don't need an external supply to power two RGB LEDs. Do some research to understand why not. 
- A motion sensor is the wrong sensor for seeing if a door is opened. A proximity sensor could tell you that much easier and more accurately. Again, do a little research on that. 
- If you're tracking time of day, use a real-time clock (RTC). There's plenty in the lab.
- Go ahead and outline exactly what times cause what colors. Make the decision and detail it in this document.
- Reference section is empty, but there's references in other, wrong places. 
- I should see more research done about the devices you plan to use at this point. 
```

# P00: Project 1
*Give your project a name and replace the above text with that name.*

**Author(s)**: *Gerardo Soto & Aaron Christson*

**Google Document**: *https://docs.google.com/document/d/1OnYtF9OHpxGGOFgn7rhAzPf1oIvjDrZAU22cBT8vuME/edit?usp=sharing*
**Motion Sensor**: *https://learn.adafruit.com/pir-passive-infrared-proximity-motion-sensor/using-a-pir-w-arduino*

---
## Purpose
*You'll complete this section as part of Milestone 1.*

In no more than one paragraph, describe the problem your product will solve, and how.

The problem we were having was that throughout the day you might be feeling sad because of something that happened or something that is about to happen. In order to regulate this, we will be making a motion "smart" lamp that turns on with motion and adjusts its light depending on the time of day to maximize positive feelings. It will also be able to react to the weather and shine the best possible light for what the weather is like.


## Initial Design Plan
*You'll complete this section as part of Milestone 1, and update regularly.*
Our initial design plan consists of 1 arduino, long enough wiring, 2 rgb lights, 2 motion sensors, and a small power supply to give power to the lights.

The motion sensor will be attached to the base of a door where it will detect whether or not someone has walked into the room, making the lights turn on. Another sensor will detect movement within the room, resetting the time before the fade back off. The purpose of the lights is to create an ambiance and bring the right feeling to the user during any given time of day. The arduino will be constantly keeping time in the background ensuring that the right light colors are activated when the user enters the room. If it is morning time, for example, the light will emit a pink/orange hue, signifying that it is a new day, and giving the user a sense of life and brightness. Another example can be night when the colors emitted can be a cool shade of purple and cyan, giving the user a light source that is not too blinding. We hope to allow the user an interface to adjust hues and brightness as they wish, as well as more features that we have in mind.



## Files
*You'll complete this section as part of Milestone 1.*

List every file in your repository, and briefly summarize each file's purpose in a sentence.

README.md - Contains informtion about the project.
example-README.md - Contains a template for the readme file.
LICENSE - license file
images - a directory that contains an image. (this was here when we joined the github classroom.)


## Summary
*You'll complete this part at the end of the project.*

Provide a brief summary description of the design and implementation,
including how much your initial design plan evolved, the final result
you achieved and the amount of time you spent as a programmer in
accomplishing these results, including any challenges overcome and
innovations that were not specifically required by the assignment.
This section should be no more than three paragraphs.

## Instructions
Explain how to use your product.
This section should THOROUGHLY describe its usage (i.e., more than just "Push start").

## Errors and Constraints
*You'll complete this part at the end of the project.*

Every program has bugs. Use this section to create a bullet list of
all known errors and deficiencies that remain in your product.
Also, list any constraints that must exist for your product to work
(e.g., Only works in low light situations).

## Reflection
*You'll complete this part at the end of the project.*

Write 2 - 4 paragraphs on your reactions to the final project.
Your reflection should be thoughtful and reflective.
It is NOT a report about WHAT you did.
Instead, it's a look back at what you learned by doing this project.
It should be critical of shortcomings (yours, as well as the instructors/assignments)
as well as celebratory of what was achieved.

## References
*Start this section at the beginning of the project, and update it throughout.*

Throughout this project, you'll be used outside resources.
Reference ALL ideas or code which are not your own, and describe and
how you integrated the ideas or code into your program. This includes
online sources, people who have helped you, and any other resources that
are not solely your own contribution. Lastly, include ALL resources you
looked at, not just the ones you ended up using directly.

## Final Self-Evaluations
*You'll complete this part at the end of the project.
Assign points to each team member in each category, based on their contribution to the team.
The sum of all member's points in each category cannot exceed 10.
For example, for Coding, Partner 1 could get 7 points, and Partner 2 gets 3 points.
You can't give both people 6 points each though, as the sum exceeds 10.

### Ideation, Brainstorming, Design:

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*

### Code creation:

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*

### Documentation creation:

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*

### Teamwork & Participation:

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*
