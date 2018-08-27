<?php
/**
 * @var \App\View\AppView $this
 * @var \App\Model\Entity\User $user
 */
?>
<script
  src="https://code.jquery.com/jquery-3.3.1.js"
  integrity="sha256-2Kok7MbOyxpgUVvAk/HJ2jigOSYS2auK4Pfzbm7uH60="
  crossorigin="anonymous"></script>

<nav class="large-3 medium-4 columns" id="actions-sidebar">
    <ul class="side-nav">
        <li class="heading"><?= __('Actions') ?></li>
        <li><?= $this->Html->link(__('List Users'), ['action' => 'index']) ?></li>
    </ul>
</nav>
<div class="users form large-9 medium-8 columns content">
    
    <fieldset>
        <legend><?= __('Choose Address') ?></legend>
        <?php
            echo $this->Form->input('country',array('options'=>$countries,'class'=>'country-box','id'=>'country-box'));
            //echo $this->Html->image('ajax-loader.gif', array('alt' => 'lodding', 'id' => 'loding1'));?>
            
        <div id="state_div">
            <?php echo $this->Form->input('state', array('id' =>'state-box',
        'options' => '$states','empty' => 'select State', 'class'=>'state-box',
            )); ?>
        </div>
            
        
        <div id="city_div">
                <?php echo $this->Form->input('city', array('id' =>'city-box',
            'options' => '$cities','empty' => 'select City','class'=>'city-box',
                )); ?>
        </div>
        
    </fieldset>
    <?php $request = $this->Url->build(['controller' => 'Tests', 'action' => 'getstates']); ?>
     <button type="hidden" id="state_url" rel="<?= $request ?>"></button>
     <?php $request = $this->Url->build(['controller' => 'Tests', 'action' => 'getcities']); ?>
     <button type="hidden" id="city_url" rel="<?= $request ?>"></button>
</div>



<script type="text/javascript">
$(document).ready(function() {
    $("#state_div").hide();
    $(".country-box").change(function () {
        $("#state_div").show();
        var country_id = $('#country-box').find(":selected").val();
        var stateurl = $('#state_url').attr('rel');
        $.ajax({
            url: stateurl,
            //url: '/cake3.6.4/Tests/getstates',
            type: 'POST',
            data: {"country_id": country_id},
            success: function(data){
               $.each(data, function(key, value) {              
                        $('<option>').val('').text('select');
                        $('<option>').val(key).text(value).appendTo($("#state-box"));
                });
            },
            error: function(e) 
            {
                alert("An error occurred: " + e.responseText.message);
                console.log(e);
            }
        });
    });
    
    /*  for city   */
    $("#city_div").hide();
    $(".state-box").change(function () {
        $("#city_div").show();
        var state_id = $('#state-box').find(":selected").val();
        var cityurl = $('#city_url').attr('rel');
        //alert(state_id);
        $.ajax({
            url: cityurl,
            //url: '/cake3.6.4/Tests/getstates',
            type: 'POST',
            data: {"state_id": state_id},
            success: function(data){
               $.each(data, function(key, value) {              
                        $('<option>').val('').text('select');
                        $('<option>').val(key).text(value).appendTo($("#city-box"));
                });
            },
            error: function(e) 
            {
                alert("An error occurred: " + e.responseText.message);
                console.log(e);
            }
        });
    });
    
    
});
</script>