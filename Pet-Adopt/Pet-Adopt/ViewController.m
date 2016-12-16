//
//  ViewController.m
//  Pet-Adopt
//
//  Created by Joshua H. Wang on 8/25/16.
//  Copyright © 2016 Optimizely. All rights reserved.
//

#import "ViewController.h"
#import "AppDelegate.h"

@interface ViewController ()

    @property AppDelegate *appDelegate;
    // reference to your Application's Optimizely instance
    @property OPTLYManager *optlyManager;
    @property OPTLYClient *optlyClient;
    @property OPTLYVariation *variation;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.appDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    
    // Activate the basic experiment and show either cats or dogs
     self.optlyManager = self.appDelegate.optlyManager;
    [self.optlyManager initializeClientWithCallback:^(NSError * _Nullable error, OPTLYClient * _Nullable client) {
        self.optlyClient = client;
        self.variation = [self.optlyClient activateExperiment:self.appDelegate.experimentKey
                                                       userId:self.appDelegate.userId];
        
        if (self.variation != nil) {
            if ([self.variation.variationKey isEqualToString:@"Dogs"]) {
                // show dogs
                NSLog(@"Dogs experiment");
                UIImage *image = [UIImage imageNamed:@"puppy"];
                [self performSelectorOnMainThread:@selector(setImage:) withObject:image waitUntilDone:NO];
            }
            else if ([self.variation.variationKey isEqualToString:@"Cats"]) {
                // show cats
                NSLog(@"Cats Experiment");
                UIImage *image = [UIImage imageNamed:@"kitten"];
                [self performSelectorOnMainThread:@selector(setImage:) withObject:image waitUntilDone:NO];
            }
        }
        else {
            // execute default code
        }
    }];
    
    
}

- (void)setImage:(UIImage *)image {
    self.petImageView.image = image;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)adoptButtonClicked:(id)sender {
    NSLog(@"adopt button clicked");
    // Track a conversion event to the Optimizely results page
     [self.optlyClient trackEvent:self.appDelegate.eventKey
     userId:self.appDelegate.userId];
     
}

@end
