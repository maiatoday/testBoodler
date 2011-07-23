from boopak.package import *
from boodle import agent
import random

water = bimport('org.boodler.old.water')

class Example(agent.Agent):
    def run(self):
        self.post_listener_agent(ExampleGone(), hold=True)
        self.post_listener_agent(ExampleThere(), hold=True)
        self.post_listener_agent(ExampleStart(), hold=True)
        self.post_listener_agent(ExampleStop(), hold=True)

class ExampleGone(agent.Agent):
    selected_event = 'gone'
    def run(self):
        self.listen(hold=True)
    def receive(self, event):
        self.sched_note(water.droplet_bloink)

class ExampleThere(agent.Agent):
    selected_event = 'there'
    def run(self):
        self.listen(hold=True)
    def receive(self, event):
        self.sched_note(water.waves_floopy)

class ExampleStart(agent.Agent):
    selected_event = 'start'
    def run(self):
        self.listen(hold=True)
    def receive(self, event):
        self.sched_note(water.droplet_plink)

class ExampleStop(agent.Agent):
    selected_event = 'stop'
    def run(self):
        self.listen(hold=True)
    def receive(self, event):
        self.sched_note(water.water_trickle)
