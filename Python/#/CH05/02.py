class calculator:
    def __init__(self):
        self.value = 0
    def add(self,val):
        self.value+=val

class maxlimitcalculator(calculator):
    def add(self,val):
        self.value += val
        if self.value > 100:
            self.value = 100


    


cal = maxlimitcalculator()

