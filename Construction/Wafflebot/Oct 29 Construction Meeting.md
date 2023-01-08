# **Theta Tau Construction Meeting**

##### Oct 29, 2022

###### *Notes taken by D.C. Zaretsky*
---

# Agenda

---
Today's agenda is as follows:

- Test Arduino with the pnumatics
- Finalize a functional prototype of the wafflemaker's open/shut mechanism
- Explore mounting options for mix injection


---

# Notes
---

### Pnumatics

In order to get pnumatics working for the wafflemaker to pivot and serve a finish waffled
- We need to power solenoids that are triggered with the arduino
- And we need air tanks to release the pressure into pistons when the solenoids are triggered
- Then a compressor to fill the tanks for use


### Wafflemaker

For the waffflemaker's open and closing system
- We need to make mounts for the servo and wafflemaker
- Also we need to string the wafflemaker handle to the servo in a way that doesnt interfere with pivoting
- And we dont need the servo to be at the peak height, we can route a longer string that way
- we need to gear the output shaft of the servo to give us much more length change per degree than 1:1


### Mix Injection

With the mix injector:
- This system needs to not be in the way of the opening and closing
- So it likely has to be above the whole thing and drip down from above




---
# Update
---
The script used for servo control is a simple loop of opening and closing like an LED blinking to test the triggering of the opening and closing gates of the servo.

We tested this with an LED which didnt work because Veed is probably an idiot. He will see what was wrong on his own time. Most of the meeting was educational with respect to how solenoids work and how pnumatic systems work. Hopefully wednesday we get mounts made in CAD and assemble the open/close system while a secondary group figures out how to test and apply the solenoid.