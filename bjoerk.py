import discord
from discord.ext import commands
import random

class MyClient(discord.Client):
    async def on_ready():
    print('Initialized')

    async def on_message(self, message):
        if message.author.id == self.user.id:
            return

        if message.content.startswith('bjoerk'):
            await message.reply('I have been summoned')

clinet = commands.Bot(command_prefix = '~')

client.run('ODE5OTk4MTEwMDEyNTM4OTEx.YEuwwA.e5uGtcFsPi5AHTZDsIEQPsR1o84')