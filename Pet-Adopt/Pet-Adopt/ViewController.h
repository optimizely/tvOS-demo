//
//  ViewController.h
//  Pet-Adopt
//
//  Created by Joshua H. Wang on 8/25/16.
//  Copyright © 2016 Optimizely. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)adoptButtonClicked:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *petImageView;

@end

