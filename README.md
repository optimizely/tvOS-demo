# Getting Started with Optimizely tvOS SDK #

## Overview ##

The Optimizely tvOS SDK allows developers to experiment with tvOS apps. This SDK handles bucketing users into a specific variation of an experiment, tracking conversions, and reporting via Optimizely's [Stats Engine](https://www.optimizely.com/statistics/).

*  View the reference [documentation](http://developers.optimizely.com/server/reference/index.html)
*  Latest [tvOS SDK]()

## Prerequisites ##
Make sure you have all of the following setup before walking through the demo apps.

1.  Make sure you have the latest macOS installed. Your macOS version must be at least OS X 10.11 El Capitan. If you are not at or above macOS 10.11 please [upgrade](http://www.apple.com/osx/how-to-upgrade/) now.
2.  Make sure how have the latest Xcode installed. Your Xcode version must be at least Xcode 7.2 for the full tvOS simulator runtime. If you are not at or above Xcode version 7.2 please get the latest version now from the [app store](https://itunes.apple.com/us/app/xcode/id497799835).
3.  Make sure you have a tvOS simulator installed. To download a simulator:
	1.  In Xcode, choose Xcode > Preferences
	2. 	In the preferences window, click Downloads
	3. 	In Components, find the tvOS simulator version you want to add, and clickt he Install button.
4.  Install either [Cocoapods](https://cocoapods.org/) or [Carthage](https://github.com/Carthage/Carthage) as your dependency manager for tvOS. 
5.  Create an Optimizely [Account](https://app.optimizely.com/signin)


## Pet-Adop Demo App
This is the most basic demo app. It is written in Objective-C and contains only activation of a basic experiment and tracking a conversion event. Read the README.md in the [Pet-Adopt Demo App](https://github.com/optimizely/tvOS-demo/tree/master/Pet-Adopt) for more information.


## Getting Help!

*  Developer Docs: [http://developers.optimizely.com/server](http://developers.optimizely.com/server)
*  Questions? Shoot us an email: [developers@optimizely.com](mailto:developers@optimizely.com) or use Live Chat on the SDK docs
