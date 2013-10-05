//
//  ViewController.h
//  first_app
//
//  Created by David ZHANG on 10/4/13.
//  Copyright (c) 2013 David ZHANG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) NSArray *predictionArray;

- (IBAction)buttonPressed:(UIButton *)sender;

- (void) makePrediction;

@end
