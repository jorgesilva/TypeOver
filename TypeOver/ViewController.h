//
//  ViewController.h
//  TypeOver
//
//  Created by Owen McGirr on 19/02/2013.
//  Copyright (c) 2013 Owen McGirr. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>

@interface ViewController : UIViewController {
    
    
    // outlets
    __weak IBOutlet UITextView *textArea;
    __weak IBOutlet UIProgressView *selectionProgressView;
    __weak IBOutlet UIButton *useButton;
    __weak IBOutlet UIButton *speedDownButton;
    __weak IBOutlet UIButton *speedUpButton;
    __weak IBOutlet UIButton *punct1Button;
    __weak IBOutlet UIButton *abc2Button;
    __weak IBOutlet UIButton *def3Button;
    __weak IBOutlet UIButton *ghi4Button;
    __weak IBOutlet UIButton *jkl5Button;
    __weak IBOutlet UIButton *mno6Button;
    __weak IBOutlet UIButton *pqrs7Button;
    __weak IBOutlet UIButton *tuv8Button;
    __weak IBOutlet UIButton *wxyz9Button;
    __weak IBOutlet UIButton *shiftButton;
    __weak IBOutlet UIButton *predictionButton;
    __weak IBOutlet UIButton *space0Button;
    __weak IBOutlet UIButton *backspaceButton;
    __weak IBOutlet UIButton *clearButton;
    NSTimer *selectionTimer, *inputTimer, *repeatTimer;
    
    // variables 
    bool fs, cma, qm, excl, apos, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, one, space, two, three, four, five, six, seven, eight, nine, zero, shift;
    float selectionRate, inputRate;
    NSString *clearString;
    NSMutableString *add, *wordString;
    NSMutableArray *predArray;
    
    
}


// actions
- (IBAction)useAct:(id)sender;
- (IBAction)speedDownAct:(id)sender;
- (IBAction)speedUpAct:(id)sender;
- (IBAction)punct1Act:(id)sender;
- (IBAction)abc2Act:(id)sender;
- (IBAction)def3Act:(id)sender;
- (IBAction)ghi4Act:(id)sender;
- (IBAction)jkl5Act:(id)sender;
- (IBAction)mno6Act:(id)sender;
- (IBAction)pqrs7Act:(id)sender;
- (IBAction)tuv8Act:(id)sender;
- (IBAction)wxyz9Act:(id)sender;
- (IBAction)shiftAct:(id)sender;
- (IBAction)space0Act:(id)sender;
- (IBAction)predictionAct:(id)sender;
- (IBAction)backspaceAct:(id)sender;
- (IBAction)clearAct:(id)sender;


@end
