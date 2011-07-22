from boopak.package import *
from boodle import agent
import random

water = bimport('org.boodler.old.water')

class Example(agent.Agent):
    selected_event = 'start'
    def run(self):
        self.listen(hold=True)
    def receive(self, event):
        self.sched_note(water.droplet_plink)
